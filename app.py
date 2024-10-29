import re
import struct
from flask import Flask, request
from flask import jsonify
from flask import render_template
import math
import os
import json

app = Flask(__name__)

import os

def find_files_recursive(directory, files_to_find):
    found_files = {}
    for root, dirs, files in os.walk(directory):
        for filename in files_to_find:
            if filename in files:
                found_files[filename] = os.path.join(root, filename)   
    return found_files

def find_descriptionFile(directory):
    description_file_name = "description.json"
    for root, dirs, files in os.walk(directory):
        if description_file_name in files:
            found_file_path = os.path.join(root, description_file_name)   
            return found_file_path

    # If the file is not found, create it in the provided directory
    new_file_path = os.path.join(directory, description_file_name)
    with open(new_file_path, 'w') as new_file:
        # Write an empty JSON object to the file
        json.dump({}, new_file)

    return new_file_path 

def set_path(path):

    global paranum_dir
    paranum_dir = None

    global parstruc_dir
    parstruc_dir = None

    global attribute_list_dir
    attribute_list_dir = None

    global attribute_info_dir
    attribute_info_dir = None

    global attribute_access_h_dir
    attribute_access_h_dir = None

    global attribute_access_c_dir
    attribute_access_c_dir = None

    global deftable_dir
    deftable_dir = None

    global description_dir
    description_dir = None

    global parinfo_dir
    parinfo_dir = None
 
    # Define file names
    files_to_check = ['PARAMNUM.H', 'parstruc.h', 'attribute_list.i', 'attribute_info.i',
                      'attribute_access.h', 'attribute_access.c', 'DEFTABLE.I', 'parinfo.i']
    
    # Find all files in the given path and its subfolders
    found_files = find_files_recursive(path, files_to_check)
  
    # Set paths
    paranum_dir = found_files.get('PARAMNUM.H')
    parstruc_dir = found_files.get('parstruc.h')
    attribute_list_dir = found_files.get('attribute_list.i')
    attribute_info_dir = found_files.get('attribute_info.i')
    attribute_access_h_dir = found_files.get('attribute_access.h')
    attribute_access_c_dir = found_files.get('attribute_access.c')
    deftable_dir = found_files.get('DEFTABLE.I')
    parinfo_dir = found_files.get('parinfo.i')
    description_dir = find_descriptionFile(path)
    
    # Check if all files are found
    if len(found_files) != len(files_to_check):
        return False  

    return True

# functions for updating parstruc.h
def add_flag(attribute_name, attribute_type):
    with open(parstruc_dir, 'r+') as file:
            file_content = file.readlines()        
            pattern = r'// FLAG END SPARES (\d+) (\d+)'
            attribute_name = attribute_name.lower()
            offset = ''

            for i, line in enumerate(file_content):
                if line.startswith("// FLAG END SPARES "):
                    match = re.match(pattern, line)
                    if match:
                        empty_spares = int(match.group(1))
                        bundle_number = int(match.group(2))
                        if empty_spares == 0:
                            # add new spare set of 32 bytes
                            part1 = file_content[:i]
                            part2 = []
                            for j in range(4):
                                part2.append('\n')
                                for k in range(8):
                                    if j == 0 and k == 0:
                                        part2.append("   unsigned short int " + attribute_name.ljust(37) + ":  1;    /* " + str(bundle_number+j) + "." + str(k) + " */" + "\n")
                                        offset = str(bundle_number+j) + "." + str(k)
                                    else:
                                        param_name = str(bundle_number+j) + "_" + str(k)
                                        part2.append("   unsigned short int spare_" + param_name.ljust(31) + ":  1;    /* " + str(bundle_number+j) + "." + str(k) + " */" + "\n")
                                        offset = str(bundle_number+j) + "." + str(k)
                            part2.append("// FLAG END SPARES 31 " + str(bundle_number+4) + "\n")
                            part3 = file_content[i+1:]

                            combined_content = part1 + part2 + part3

                            file.seek(0)
                            file.writelines(combined_content)
                            file.truncate()
                        else:
                            # add new parameter
                            t = bundle_number - math.ceil(empty_spares/8)
                            line_of_new_param = i - (math.ceil(empty_spares/8)-1 + empty_spares)
                            part1 = file_content[:line_of_new_param]
                            offset = str(t) + "." + str(8 - empty_spares % 8 if empty_spares%8 else 0)
                            part2 = ["   unsigned short int " + attribute_name.ljust(37) + ":  1;    /* " + str(t) + "." + str(8 - empty_spares % 8 if empty_spares%8 else 0) + " */" + "\n"]
                            part3 = file_content[line_of_new_param + 1 : i]
                            part4 = ["// FLAG END SPARES " + str(empty_spares-1) + " "  + str(bundle_number) + "\n"]
                            part5 = file_content[i+1:]

                            combined_content = part1 + part2 + part3 + part4 + part5

                            file.seek(0)
                            file.writelines(combined_content)
                            file.truncate()
    return float(offset)

def add_byte(attribute_name, attribute_type):                           
    with open(parstruc_dir, 'r+') as file:
            file_content = file.readlines()  
            pattern = r'// BYTE END SPARES (\d+)'
            attribute_name = attribute_name.lower()

            for i, line in enumerate(file_content):
                if line.startswith("// BYTE END SPARES "):
                    match = re.match(pattern, line)
                    if match:
                        empty_spares = int(match.group(1))
                        if empty_spares == 0:
                            # add new spare set of 4 bytes
                            part1 = file_content[:i]
                            part2 = ['\n']
                            for j in range(4):
                                if j == 0:
                                    part2.append("   unsigned char " + attribute_name + ";"  + "\n")
                                else:
                                    param_name = str(j+1)
                                    part2.append("   unsigned char spare_byte_0" + param_name + ";" + "\n")
                            part2.append("// BYTE END SPARES 3 " + "\n")
                            part3 = file_content[i+1:]

                            combined_content = part1 + part2 + part3

                            file.seek(0)
                            file.writelines(combined_content)
                            file.truncate()
                        else:
                            # add new parameter
                            line_of_new_param = i - empty_spares
                            part1 = file_content[:line_of_new_param]
                            part2 = ["   unsigned char " + attribute_name + ";" + "\n"]
                            part3 = file_content[line_of_new_param + 1 : i]
                            part4 = ["// BYTE END SPARES " + str(empty_spares - 1) + "\n"]
                            part5 = file_content[i+1:]

                            combined_content = part1 + part2 + part3 + part4 + part5

                            file.seek(0)
                            file.writelines(combined_content)
                            file.truncate() 

def add_word(attribute_name, attribute_type):
    with open(parstruc_dir, 'r+') as file:
            file_content = file.readlines()  
            pattern = r'// WORD END SPARES (\d+)'
            attribute_name = attribute_name.lower()

            for i, line in enumerate(file_content):
                if line.startswith("// WORD END SPARES "):
                    match = re.match(pattern, line)
                    if match:
                        empty_spares = int(match.group(1))
                        if empty_spares == 0:
                            # add new spare set of 2 words
                            part1 = file_content[:i]
                            part2 = ['\n']
                            part2.append("   unsigned short " + attribute_name + ";"  + "\n")
                            param_name = str(1)
                            part2.append("   unsigned short spare_word_0" + param_name + ";" + "\n")
                            part2.append("// WORD END SPARES 1 " + "\n")
                            part3 = file_content[i+1:]

                            combined_content = part1 + part2 + part3

                            file.seek(0)
                            file.writelines(combined_content)
                            file.truncate()
                        else:
                            # add new parameter
                            line_of_new_param = i - empty_spares
                            part1 = file_content[:line_of_new_param]
                            part2 = ["   unsigned short " + attribute_name + ";" + "\n"]
                            part3 = file_content[line_of_new_param + 1 : i]
                            part4 = ["// WORD END SPARES " + str(empty_spares - 1) + "\n"]
                            part5 = file_content[i+1:]

                            combined_content = part1 + part2 + part3 + part4 + part5

                            file.seek(0)
                            file.writelines(combined_content)
                            file.truncate()

def add_dword(attribute_name, attribute_type):
    with open(parstruc_dir, 'r+') as file:
            file_content = file.readlines()  
            attribute_name = attribute_name.lower()

            for i, line in enumerate(file_content):
                if line.startswith("// DWORD END"):         
                    part1 = file_content[:i]
                    part2 = []
                    part2.append("   unsigned long " + attribute_name + ";"  + "\n")
                    part2.append("// DWORD END" + "\n")
                    part3 = file_content[i+1:]

                    combined_content = part1 + part2 + part3

                    file.seek(0)
                    file.writelines(combined_content)
                    file.truncate()

def add_string(attribute_name, attribute_type, size): 
    with open(parstruc_dir, 'r+') as file:
            file_content = file.readlines()  
            attribute_name = attribute_name.lower()

            for i, line in enumerate(file_content):
                if line.startswith("// STRING END"):
                    part1 = file_content[:i]
                    size = int(size)
                    if size%4:
                        pad = 4 - size % 4
                        part2 = [
                        f"   unsigned char {attribute_name};\n",
                        f"   unsigned char pad1[{pad}];\n",
                        "// STRING END\n"
                    ]
                    else:
                        part2 = [
                        f"   unsigned char {attribute_name};\n",
                        "// STRING END\n"
                    ]                     
                    part3 = file_content[i+1:]

                    combined_content = part1 + part2 + part3

                    file.seek(0)
                    file.writelines(combined_content)
                    file.truncate()  

def update_parinfo(attribute_name, attribute_type, ownership, min_value, max_value, offset):
    with open(parinfo_dir, 'r+') as file:
        file_content = file.readlines()  
        attribute_name_lower = attribute_name.lower()

        for i, line in enumerate(file_content):
            if line.startswith("// ATAG END"):         
                part1 = file_content[:i]
                part2 = []
                if attribute_type == "FLAG":
                   offset_int = int(offset)
                   type = int((offset-offset_int)*10)
                   hexa_value = hex(offset_int)
                   name = "{NUM_" + attribute_name + ","
                   part2.append(name.ljust(48) + str(hexa_value) + ",                                                                  BIT_" + str(type) + ",               " + str(min_value).rjust(5) +",             " + str(max_value).rjust(5) + ", " + (str(ownership)+",").ljust(17) + "N_A, N_A, N_A,            FALSE},   // " +"\n")
                else:  
                   name = "{NUM_" + attribute_name + ","  
                   part2.append(
                        str(name).ljust(41) +
                        "offsetof(" + str(attribute_type + "_PARAMS," + attribute_name_lower + "),").ljust(57) +
                        (attribute_type + "_PARAM,").ljust(21) +
                        str(min_value).rjust(5) + ",             " +
                        str(max_value).rjust(5) + ", " +
                        (str(ownership) + ",").ljust(17) +
                        "N_A, N_A, N_A,            FALSE},   // "+ attribute_name_lower + "\n"
                    )

                part2.append("// ATAG END" + "\n")
                part3 = file_content[i+1:]

                combined_content = part1 + part2 + part3

                file.seek(0)
                file.writelines(combined_content)
                file.truncate()

def update_parstruc(attribute_name, attribute_type, size, ownership, min_value, max_value):
    offset = None
    if attribute_type == "FLAG":
        offset = add_flag(attribute_name, attribute_type)

    elif attribute_type == "BYTE":
        add_byte(attribute_name, attribute_type)

    elif attribute_type == "WORD": 
        add_word(attribute_name, attribute_type)

    elif attribute_type == "DWORD": 
        add_dword(attribute_name, attribute_type)
                                                
    elif attribute_type == "STRING": 
        add_string(attribute_name, attribute_type, size)
    
    update_parinfo(attribute_name, attribute_type, ownership, min_value, max_value, offset)

                       
# function for updating paramnum
def update_system_parameters_in_paramnum(attribute_name):
    with open(paranum_dir, 'r+') as file:
        header_content = file.readlines()
        pattern = r'// ATAG SYSTEM_PARAMETER END (\d+)'

        line_number = 0
        for i, line in enumerate(header_content):
            if line.startswith("// ATAG SYSTEM_PARAMETER END "):
                match = re.match(pattern, line)
                if match:
                    last_attribute = int(match.group(1)) 
                    line_number = i
                    break

        if line_number == 0:
            print('"// ATAG SYSTEM_PARAMETER END (last attribute number)" cannot be found in the paramnum.h')
        else:    
            formated_hex_attribute_number = "{:04X}".format(last_attribute)
            packed_data = struct.pack('{}s'.format(len(formated_hex_attribute_number)), formated_hex_attribute_number.encode()) 
            formatted_output = ' '.join(packed_data[i:i+2].decode() for i in range(0, len(packed_data), 2))

            part1 = header_content[:line_number]
            part2 = "#define NUM_" + attribute_name.ljust(44) + " " + str(last_attribute) + '    ' + '/* F8 ' + formatted_output + ' */' + '\n'
            part3 = ["// ATAG SYSTEM_PARAMETER END " + str(last_attribute + 1) + '\n']
            part4 = header_content[line_number+1:]

            combined_content = part1 + [part2] + part3 + part4

            file.seek(0)  
            file.writelines(combined_content)
            file.truncate() 

def update_scanner_statistics_in_paramnum(attribute_name):
    with open(paranum_dir, 'r+') as file:
        header_content = file.readlines()
        pattern = r'// ATAG SCANNER_STATISTICS END (\d+)'

        line_number = 0
        for i, line in enumerate(header_content):
            if line.startswith("// ATAG SCANNER_STATISTICS END "):
                match = re.match(pattern, line)
                if match:
                    last_attribute = match.group(1)
                    line_number = i
                    break

        if line_number == 0:
            print('"// ATAG SCANNER_STATISTICS (last attribute number)" cannot be found in the paramnum.h')
        else:    
            part1 = header_content[:line_number]
            part2 = "#define NUM_" + attribute_name.ljust(64) + " " + str(last_attribute) + '\n'
            last_attribute_int = int(last_attribute)
            part3 = ["// ATAG SCANNER_STATISTICS END " + str(last_attribute_int + 1) + '\n']
            part4 = header_content[line_number+1:]

            combined_content = part1 + [part2] + part3 + part4

            file.seek(0)  
            file.writelines(combined_content)
            file.truncate() 

# update attribute list
def update_system_parameter_in_attribute_list(attribute_name):
    with open(attribute_list_dir, 'r+') as file:
        header_content = file.readlines()
        pattern = r'// ATAG SYSTEM_PARAMETER END (\d+)'

        line_number = 0

        for i, line in enumerate(header_content):
            if line.startswith("// ATAG SYSTEM_PARAMETER END "):
                match = re.match(pattern, line)
                if match:
                    attribute_number = int(match.group(1))                   
                    line_number = i
                    break  
        
        if line_number == 0:
            print("ATAG END cannot be found")
        name_with_comma = attribute_name + ','

        formated_hex_attribute_number = "{:04X}".format(attribute_number)
        packed_data = struct.pack('{}s'.format(len(formated_hex_attribute_number)), formated_hex_attribute_number.encode()) 
        formatted_output = ' '.join(packed_data[i:i+2].decode() for i in range(0, len(packed_data), 2))

        part1 = header_content[:line_number]
        part2 = '   ATT_' + attribute_name.ljust(38) + '= ' + 'NUM_' + name_with_comma.ljust(41) + '//  ' + str(attribute_number) + '    ' + formatted_output + '\n' 
        part3 = ["// ATAG SYSTEM_PARAMETER END " + str(attribute_number + 1) + '\n']
        part4 = header_content[line_number+1:]

        combined_content = part1 + [part2] + part3 + part4

        file.seek(0)  
        file.writelines(combined_content)
        file.truncate()

def update_attribute_list(attribute_name, attribute_domain):
        with open(attribute_list_dir, 'r+') as file:
            header_content = file.readlines()
            pattern = r'// ATAG (\w+) END (\d+)'

            line_number = 0

            for i, line in enumerate(header_content):
                if line.startswith("// ATAG "):
                    match = re.match(pattern, line)
                    if match and attribute_domain == match.group(1):
                        attribute_number = int(match.group(2))                   
                        line_number = i
                        break  
            
            if line_number == 0:
                print("ATAG END cannot be found")
            name_with_comma = attribute_name + ','

            part1 = header_content[:line_number]
            part2 = '   ATT_' + attribute_name.ljust(38) + '= ' + str(attribute_number) + ',' +'\n' 
            part3 = ["// ATAG "+ attribute_domain + " END " + str(attribute_number + 1) + '\n']
            part4 = header_content[line_number+1:]

            combined_content = part1 + [part2] + part3 + part4

            file.seek(0)  
            file.writelines(combined_content)
            file.truncate()     

def update_attribute_info(attribute_name, attribute_type, permission, size):
    with open(attribute_info_dir, 'r+') as file:
        header_content = file.readlines()
        pattern = r'// ATAG\s+(\w+) END (\d+)'

        line_number = 0
        attribute_number = 0

        for i, line in enumerate(header_content):
            if line.startswith("//"):
                match = re.match(pattern, line)
                if match:
                    name = match.group(1)
                    attribute_number = match.group(2)
                    if name == "SYSTEM_PARAMETER":
                        line_number = i
                        break  

        name_with_comma = attribute_name + ','

        part1 = header_content[:line_number]
        part2 = '   {ATT_' + name_with_comma.ljust(32) + 'ATT_TYPE_' + str(attribute_type) + ",    (ATT_SM_" + str(permission).ljust(5) + "| ATT_UM_" + str(permission) + "  ), " + str(size) + '                         ,CONFIG_MASK_ALL  },  // ' + attribute_number + '\n' 
        part3 = header_content[line_number:line_number+1]
        part3_updated = [re.sub(r'\d+', str(int(attribute_number) + 1), line) for line in part3]
        part4 = header_content[line_number+1:]

        combined_content = part1 + [part2] + part3_updated + part4

        file.seek(0)  
        file.writelines(combined_content)
        file.truncate()

def add_flag_to_deftable(attribute_name, default_value):
    with open(deftable_dir, 'r+') as file:
        file_content = file.readlines()        
        pattern = r'// FLAG END SPARES (\d+) (\d+)'
        attribute_name = attribute_name.lower()

        for i, line in enumerate(file_content):
            if line.startswith("// FLAG END SPARES "):
                match = re.match(pattern, line)
                if match:
                    empty_spares = int(match.group(1))
                    bundle_number = int(match.group(2))
                    if empty_spares == 0:
                        # add new spare set of 32 bytes
                        part1 = file_content[:i]
                        part2 = []
                        for j in range(4):
                            part2.append('\n')
                            for k in range(8):
                                if j == 0 and k == 0:
                                    part2.append(default_value.rjust(39) + ",   /* " + attribute_name.ljust(42) + "*/" + "\n")
                                else:
                                    param_name = str(bundle_number+j) + "." + str(k)
                                    part2.append("                                      0,   /* spare_" + param_name.ljust(35) + " */" + "\n")
                        part2.append("// FLAG END SPARES 31 " + str(bundle_number+4) + "\n")
                        part3 = file_content[i+1:]

                        combined_content = part1 + part2 + part3

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate()
                    else:
                        # add new parameter
                        t = bundle_number - math.ceil(empty_spares/8)
                        line_of_new_param = i - (math.ceil(empty_spares/8)-1 + empty_spares)
                        part1 = file_content[:line_of_new_param]
                        part2 = [default_value.rjust(39) + ",   /* " + attribute_name.ljust(42) + "*/" + "\n"]
                        part3 = file_content[line_of_new_param + 1 : i]
                        part4 = ["// FLAG END SPARES " + str(empty_spares-1) + " "  + str(bundle_number) + "\n"]
                        part5 = file_content[i+1:]

                        combined_content = part1 + part2 + part3 + part4 + part5

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate()
    
    with open(deftable_dir, 'r+') as file:
        file_content = file.readlines()        
        pattern = r'// FLAG-FAT END SPARES (\d+) (\d+)'
        attribute_name = attribute_name.lower()

        for i, line in enumerate(file_content):
            if line.startswith("// FLAG-FAT END SPARES "):
                match = re.match(pattern, line)
                if match:
                    empty_spares = int(match.group(1))
                    bundle_number = int(match.group(2))
                    if empty_spares == 0:
                        # add new spare set of 32 bytes
                        part1 = file_content[:i]
                        part2 = []
                        for j in range(4):
                            part2.append('\n')
                            for k in range(8):
                                if j == 0 and k == 0:
                                    part2.append(default_value.rjust(39) + ",   /* " + attribute_name.ljust(42) + "*/" + "\n")
                                else:
                                    param_name = str(bundle_number+j) + "." + str(k)
                                    part2.append("                                      0,   /* spare_" + param_name.ljust(35) + " */" + "\n")
                        part2.append("// FLAG-FAT END SPARES 31 " + str(bundle_number+4) + "\n")
                        part3 = file_content[i+1:]

                        combined_content = part1 + part2 + part3

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate()
                    else:
                        # add new parameter
                        t = bundle_number - math.ceil(empty_spares/8)
                        line_of_new_param = i - (math.ceil(empty_spares/8)-1 + empty_spares)
                        part1 = file_content[:line_of_new_param]
                        part2 = [default_value.rjust(39) + ",   /* " + attribute_name.ljust(42) + "*/" + "\n"]
                        part3 = file_content[line_of_new_param + 1 : i]
                        part4 = ["// FLAG-FAT END SPARES " + str(empty_spares-1) + " "  + str(bundle_number) + "\n"]
                        part5 = file_content[i+1:]

                        combined_content = part1 + part2 + part3 + part4 + part5

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate()

def add_byte_to_deftable(attribute_name, default_value):
    with open(deftable_dir, 'r+') as file:
        file_content = file.readlines()  
        pattern = r'// BYTE END SPARES (\d+)'
        attribute_name = attribute_name.lower()

        for i, line in enumerate(file_content):
            if line.startswith("// BYTE END SPARES "):
                match = re.match(pattern, line)
                if match:
                    empty_spares = int(match.group(1))
                    if empty_spares == 0:
                        # add new spare set of 4 bytes
                        part1 = file_content[:i]
                        part2 = ['\n']
                        for j in range(4):
                            if j == 0:
                                part2.append(default_value.rjust(39) + ",    /* " + attribute_name.ljust(41) + "*/" + "\n")
                            else:
                                param_name = str(j+1)
                                part2.append("                                      0,    /* spare_" + param_name.ljust(34) + " */" + "\n")
                        part2.append("// BYTE END SPARES 3 " + "\n")
                        part3 = file_content[i+1:]

                        combined_content = part1 + part2 + part3

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate()
                    else:
                        # add new parameter
                        line_of_new_param = i - empty_spares
                        part1 = file_content[:line_of_new_param]
                        part2 = [default_value.rjust(39) + ",    /* " + attribute_name.ljust(41) + "*/" + "\n"]
                        part3 = file_content[line_of_new_param + 1 : i]
                        part4 = ["// BYTE END SPARES " + str(empty_spares - 1) + "\n"]
                        part5 = file_content[i+1:]

                        combined_content = part1 + part2 + part3 + part4 + part5

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate() 

# def add_word_to_deftable(attribute_name, default_value):

# def add_dword_to_deftable(attribute_name, default_value):

def add_string_to_deftable(attribute_name, default_value):
    with open(deftable_dir, 'r+') as file:
        file_content = file.readlines()  
        pattern = r'// STRING END PADS (\d+)'
        attribute_name = attribute_name.lower()

        for i, line in enumerate(file_content):
            if line.startswith("// STRING END PADS "):
                match = re.match(pattern, line)
                if match:
                    pads = int(match.group(1))
                    if pads == 0:
                        # add new string
                        part1 = file_content[:i]
                        part2 = ['\n{']
                        for j in range(len(default_value)-1):                        
                            part2.append(','.join(default_value[j]) + "\n") 
                        last_line_length = len(default_value[-1]) 
                        new_pad = 4 - last_line_length % 4  
                        part2.append(','.join(default_value[-1]) + "}   /*" + attribute_name + "*/" + "\n{")  
                        if (new_pad<4): 
                            part2.append(','.join(['0x00' for i in range(new_pad)]) + "}      /* padding */")
                         
                        part2.append("\n// STRING END PADS " + str(new_pad) + "\n")
                        part3 = file_content[i+1:]

                        combined_content = part1 + part2 + part3

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate()
                    else:
                        # add new string 
                        part1 = file_content[:i-1]
                        part2 = ['\n{']
                        for j in range(len(default_value)-1):                        
                            part2.append(','.join(default_value[j]) + "\n") 
                        last_line_length = len(default_value[-1]) 
                        new_pad = 4 - (last_line_length - pads) % 4 
                        part2.append(','.join(default_value[-1]) + "}\n{")  
                        if (new_pad<4): 
                            part2.append(','.join(['0x00' for i in range(new_pad)]) + "}      /* padding */")

                        part2.append("\n// STRING END PADS " + str(new_pad) + "\n")
                        part3 = file_content[i+1:]

                        combined_content = part1 + part2 + part3

                        file.seek(0)
                        file.writelines(combined_content)
                        file.truncate() 

def update_deftable(attribute_name, attribute_type, default_value):
    if attribute_type == "FLAG":
        add_flag_to_deftable(attribute_name, default_value)

    elif attribute_type == 'BYTE':
        add_byte_to_deftable(attribute_name, default_value)

    # elif attribute_type == "WORD": 
    #     add_word_to_deftable(attribute_name, default_value)

    # elif attribute_type == "DWORD": 
    #     add_dword_to_deftable(attribute_name, default_value)
                                                
    elif attribute_type == "STRING": 
        add_string_to_deftable(attribute_name, default_value)
    else: 
        pass

def add_description(attribute_number, description):
    if os.path.exists(description_dir) and os.path.getsize(description_dir) > 0:
        with open(description_dir, 'r') as file:
            descriptions = json.load(file)
    else:
        descriptions = {}
    
    descriptions[attribute_number] = description
    
    with open(description_dir, 'w') as file:
        json.dump(descriptions, file, indent=4)

def update_header(attribute_name, attribute_domain, attribute_type, permission, size, default_value, discription, ownership, min_value, max_value, attribute_number):
    if attribute_domain == "SYSTEM_PARAMETER":
        # Update paramnum.h file
        update_system_parameters_in_paramnum(attribute_name)
        # Update attribute_list.i file
        update_system_parameter_in_attribute_list(attribute_name)
        # Update attribute_info.i file
        update_attribute_info(attribute_name, attribute_type, permission, size)

    elif attribute_domain == "SCANNER_STATISTICS":
        update_scanner_statistics_in_paramnum(attribute_name)   

    elif attribute_domain in ["SCANNER_DIAGONISTIC", "DISCOVERY", "SCANNER_STATUS", "BATTERY", "RFID_CONTROL", "DUMMY_PARAMETERS", "WHISTLER_RS507", "CUSTOMER_FACING"]:             
        # Update attribute_list.i file
        update_attribute_list(attribute_name, attribute_domain)

    update_parstruc(attribute_name, attribute_type, size, ownership, min_value, max_value)
    update_deftable(attribute_name, attribute_type, default_value)
    add_description(attribute_number, discription)
    
def add_declarations_of_get_and_set_functions(attribute_name, readFunction, writeFunction, attribute_type, read_function_description, write_function_description):
    with open(attribute_access_h_dir, 'r+') as file:
        file_content = file.readlines()

        endif_line_number = None
        for i, line in enumerate(file_content):
            if line.strip() == "// END_ATTRIBUTE_ACCESS.H":
                endif_line_number = i
                break

        if endif_line_number is not None:
            content = []
            if readFunction:
                content.append(attribute_type + " get_" + attribute_name.lower() + "(void);\n")
            if writeFunction:
                content.append("void set_" + attribute_name.lower() + "(" + attribute_type + " value);\n")

            file_content = file_content[:endif_line_number] + content + file_content[endif_line_number:]
            file.seek(0)
            file.writelines(file_content)

def add_definitions_of_get_and_set_functions(attribute_name, readFunction, writeFunction, attribute_type, read_function_description, write_function_description):
    with open(attribute_access_c_dir, 'r+') as file:
        file_content = file.readlines()

        end_line_number = None
        for i, line in enumerate(file_content):
            if line.strip() == "// END ATTRIBUTE ACCESS":
                end_line_number = i
                break
      
        if end_line_number is not None:
            new_content = []
            if readFunction:
                new_content.append("/*********************************************************************\n" +                      
                "* Synopsis:         " + str(attribute_type) + " " + "get_" + attribute_name.lower() + "(void)\n" +
                "*\n" +
                "* Description:      " + read_function_description + "\n" +
                "*\n" +
                "* Parameters:       None\n" +
                "*\n" +
                "* Return Value:     " + attribute_type + "\n"
                "*\n" +
                "* Inputs:           None\n" +
                "*\n" +
                "* Outputs:          None\n" +
                "*\n" +
                "* External Calls:   None\n"   +
                "*\n" +
                "* Notes:            None\n" +
                "**********************************************************************/\n" +
                "/*********************************************************************\n" +
                "* Pseudocode:       None\n" +
                "*\n" +
                "**********************************************************************/\n") 
                new_content.append(attribute_type + " get_" + attribute_name.lower() + "(void)\n{\n}\n")
                new_content.append("\n")
            if writeFunction:
                new_content.append("/****************************************************************************\n" +
                "* Synopsis: set_" + attribute_name.lower() +  "(" + attribute_type + " " + "value)\n" +                                  
                "*\n" +
                "* Description:  " +  write_function_description + "\n" +
                "*\n" +
                "* Parameters:       None\n" +
                "*\n" +
                "* input Value:     " + attribute_type + "\n"
                "*\n" +
                "* Inputs:           None\n" +
                "*\n" +
                "* Outputs:          None\n" +
                "*\n" +
                "* External Calls:   None\n"   +
                "*\n" +
                "* Notes:            None\n" +
                "****************************************************************************/\n" +
                "/*********************************************************************\n" +
                "* Pseudocode:       None\n" +
                "*\n" +
                "**********************************************************************/\n")
                new_content.append("void set_" + attribute_name.lower() + "(" + attribute_type + " value)\n{\n}\n")
                new_content.append("\n")
            file_content[end_line_number:end_line_number] = new_content

            file.seek(0)
            file.truncate()  
            file.writelines(file_content)
       
# return true parameter name already exists
def parameterExists(attribute_name):
    with open(paranum_dir, 'r') as file:
        header_content = file.readlines()
    
    pattern_start = r'// ATAG SCANNER_STATISTICS START'
    pattern_end = r'// ATAG SCANNER_STATISTICS END (\d+)'
    pattern_attribute = r'#define NUM_STATS_(\w+)\s+ .*'

    attribute_exist_domain = None
    current_domain = None 
    domain_start_line = 0
    domain_end_line = 0

    for i, line in enumerate(header_content):
        match_start = re.match(pattern_start, line)
        match_end = re.match(pattern_end, line)
        if match_start:
            domain_start_line = i
        elif match_end:
            domain_end_line = i

    for j in range(domain_start_line + 1, domain_end_line):
        match = re.match(pattern_attribute, header_content[j])
        if match:
            if attribute_name == match.group(1):
                attribute_exist_domain = "SCANNER_STATISTICS"
                break            
  
    with open(attribute_list_dir, 'r') as file:
        header_content = file.readlines()

    pattern_start = r'// ATAG\s+(\w+) START'
    pattern_end = r'// ATAG\s+(\w+) END (\d+)'
    pattern_attribute = r'   ATT_(\w+) .*'

    current_domain = None 
    domain_start_line = 0
    domain_end_line = 0

    for i, line in enumerate(header_content):
        if line.startswith("// ATAG"):
            match_start = re.match(pattern_start, line)
            match_end = re.match(pattern_end, line)
            if match_start:
                current_domain = match_start.group(1)
                domain_start_line = i
            elif match_end:
                domain_end_line = i

            if domain_end_line > domain_start_line:
                for j in range(domain_start_line + 1, domain_end_line):
                    match = re.match(pattern_attribute, header_content[j])
                    if match:
                        if attribute_name == match.group(1):
                            attribute_exist_domain = current_domain
                            break
                domain_start_line = domain_end_line
            if attribute_exist_domain:
                break    
        
    return attribute_exist_domain
               
def parse_attribute_list(attribute_list_dir):
    attributes = {}
    with open(attribute_list_dir, 'r') as file:
        for line in file:
            if line.startswith("// ATAG"):
                match = re.match(r'// ATAG (\w+) END (\d+)', line)
                if match:
                    name = match.group(1)
                    number = int(match.group(2))
                    attributes[name] = number
    return attributes

def get_attribute_number(attribute_name):
    if attribute_name == "SCANNER_STATISTICS":
        attributes = parse_attribute_list(paranum_dir)
    else:    
        attributes = parse_attribute_list(attribute_list_dir)
    return attributes.get(attribute_name)

@app.route('/get_paths', methods=['GET'])
def get_paths():
    path_param = request.args.get('path')
    # Define default values for directory paths if they are not defined
    not_found = "could not find in -> " + path_param
    found = "found"
    set_path(path_param) 

    # Check each directory path and set default value if not defined
    paths = {
        "paramnum_dir": found if paranum_dir else not_found,
        "parstruc_dir": found if parstruc_dir else not_found,
        "attribute_list_dir": found if attribute_list_dir else not_found,
        "attribute_info_dir": found if attribute_info_dir else not_found,
        "attribute_access_h_dir": found if attribute_access_h_dir else not_found,
        "attribute_access_c_dir": found if attribute_access_c_dir else not_found,
        "deftable_dir": found if deftable_dir else not_found,
        "parinfo_dir": found if parinfo_dir else not_found
    }
    return jsonify(paths)

@app.route('/path', methods=['POST'])
def update_path():
    _json = request.json
    path = _json["path"]
    success = set_path(path)  # Call the set_path function
    if success:
        return jsonify({'success': True}), 200
    else:
        return jsonify({'success': False}), 400

# add new parameter
@app.route('/update_header', methods=['POST'])
def handle_update_header():
    _json = request.json
    attribute_name = _json['attribute_name']
    attribute_domain = _json['attribute_domain']
    attribute_type = _json['attribute_type']
    permission = _json['attribute_permission']
    size = _json['size']
    readFunction = _json['read']
    writeFunction = _json['write']
    defalut_value =_json["default"]
    discription = _json["discription"]
    ownership = _json["ownership"]
    max_value = _json["max_value"]
    min_value = _json["min_value"]
    read_function_description = _json["read_function_description"]
    write_function_description = _json["write_function_description"]
    attribute_number = _json["attribute_number"]
     
    attribute_exist_domain = parameterExists(attribute_name)
    if attribute_exist_domain:
        return jsonify({'message': attribute_name + ' already exists in ' + attribute_exist_domain}), 200
    else:           
        update_header(attribute_name, attribute_domain, attribute_type, permission, size, defalut_value, discription, ownership, min_value, max_value, attribute_number) 
        add_declarations_of_get_and_set_functions(attribute_name, readFunction, writeFunction, attribute_type, read_function_description, write_function_description)
        add_definitions_of_get_and_set_functions(attribute_name, readFunction, writeFunction, attribute_type, read_function_description, write_function_description )
        return jsonify({'message': attribute_name + ' created successfully'}), 200

# Define routes for request for attribute numbers
@app.route('/SYSTEM_PARAMETER', methods=['GET'])
def get_system_parameter_number():
    attribute_number = get_attribute_number('SYSTEM_PARAMETER')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/SCANNER_DIAGONISTIC', methods=['GET'])
def get_scanner_diagonistic_numer():
    attribute_number = get_attribute_number('SCANNER_DIAGONISTIC')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404
    
@app.route('/SCANNER_STATISTICS', methods=['GET'])
def get_scanner_statistics():
    attribute_number = get_attribute_number('SCANNER_STATISTICS')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/DISCOVERY', methods=['GET'])
def get_discovery():
    attribute_number = get_attribute_number('DISCOVERY')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/SCANNER_STATUS', methods=['GET'])
def get_scanner_status():
    attribute_number = get_attribute_number('SCANNER_STATUS')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/BATTERY', methods=['GET'])
def get_battery():
    attribute_number = get_attribute_number('BATTERY')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/DUMMY_PARAMETERS', methods=['GET'])
def get_dummy_parameters():
    attribute_number = get_attribute_number('DUMMY_PARAMETERS')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/RFID_CONTROL', methods=['GET'])
def get_RFID():
    attribute_number = get_attribute_number('RFID_CONTROL')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/WHISTLER_RS507', methods=['GET'])
def get_WHISTLER():
    attribute_number = get_attribute_number('WHISTLER_RS507')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/SYNAPSE_PARAMETER', methods=['GET'])
def get_SYNAPSE():
    attribute_number = get_attribute_number('SYNAPSE_PARAMETER')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/CUSTOMER_FACING', methods=['GET'])
def get_costomer_facing():
    attribute_number = get_attribute_number('CUSTOMER_FACING')
    if attribute_number is not None:
        return jsonify({'Last_value': attribute_number}), 200
    else:
        return jsonify({'error': 'Attribute not found'}), 404

@app.route('/', methods=['GET'])
def handle_home():
    return render_template('GUI.html')

if __name__ == '__main__':
    app.run(debug=True, port=5000)


