// This function send data to the backend
function postData() {
    var category = document.getElementById("categorySelection").value;
    var attributeName_ = document.getElementById("attributeName").value.trim();
    var attributeType = document.getElementById("attribute-type").value;
    var attributePermission = document.getElementById("permision").value;
    var size = document.getElementById("size").value;
    var readFunction = document.getElementById("read-function").checked;
    var writeFunction = document.getElementById("write-function").checked;
    var default_value = document.getElementById("Default-value").value;
    var discription = document.getElementById("discription").value;
    var ownership = document.getElementById("ownership").value;
    var min_value = document.getElementById("min_value").value;
    var max_value = document.getElementById("max_value").value;
    var read_function_description = document.getElementById("read-function-description").value;
    var write_function_description = document.getElementById("write-function-description").value;
    var attribute_number = document.getElementById("attribute_number").value;

    // Input data validation start =================================================================================================================

    attributeName = attributeName_.replace(/\s+/g, "_"); // replace the spaces in attribute name with "_".

    var out_window = document.getElementById("output");    
    var Text = out_window.value;  // Existing text of output window

    // default value validation start................................................................................................................

    var format = true; // Initially assume default value is in correct format. Then we are going to check for each parameter type.
    
    // validate the String type parameter default value. This should be comma seperated hexa decimal values.
    if (attributeType == "STRING"){    
        var default_string = []; // This is to check the defaut value.   
        var textarea = document.getElementById("Default-value");
        var lines = textarea.value.split('\n');
        for (var i = 0; i < lines.length; i++) {
            var values = lines[i].split(',');
            var line_array =[];
            var last = values.length;
            if (last == 11 || last == 10) {
                for (var j = 0; j < 10; j++) {
                    var value = values[j].trim();
                    if (/^0x[0-9A-Fa-f]{2}$/.test(value)){
                        line_array.push(value); 
                    } else {
                        format = false;
                    }               
                }
            } else {
                if (values[last-1].trim() == ""){
                    for (var j = 0; j < last-1; j++) {
                        var value = values[j].trim();
                        if (/^0x[0-9A-Fa-f]{2}$/.test(value)){
                            line_array.push(value); 
                        } else {
                            format = false;
                        }  
                    } 
                }else{
                    for (var j = 0; j < last; j++) {
                        var value = values[j].trim();                   
                        if (/^0x[0-9A-Fa-f]{2}$/.test(value)){
                            line_array.push(value); 
                        } else {
                            format = false;
                        }  
                    }
                }           
            }       
            default_string.push(line_array);
        }
        default_value = default_string;
    }
    else if (attributeType == "FLAG"){
        if ( !["1","0"].includes(default_value)){
            format = false;
        }
    }

    // default value validation end..................................................................................................................

    if (category == 'NOT_SELECTED') {
        let message = "Parameter Category not selected.\n";
        Text = Text + message;
    }
    else if (attributeName == '') {
        let message = "Attribute name is empty.\n";
        Text = Text + message;
    }
    // Check weather attribute name has only alphabert characters and numbers.
    else if (!isValidString(attributeName)) {
        let message = "Attribute name can have alphanumeric characters only.\n";
        Text = Text + message;
    }
    else if (attributeType == 'Select') {
        let message = "Attribute Type not selected.\n";
        Text = Text + message;
    }
    else if (size == null) {
        let message = "Attribute Size requared.\n";
        Text = Text + message;
    }
    else if (!format) {
        let message = "Error : Default value format error.\n";
        Text = Text + message;
    } 
    else if (attributeType == "FLAG" && !["1","0"].includes(min_value)) {
        let message = "Error : min value should be 0 or 1 for the bit parameters.\n" ;
        Text = Text + message;
    }
    else if (attributeType == "FLAG" && !["1","0"].includes(max_value)) {
        let message = "Error : min value should be 0 or 1 for the bit parameters.\n" ;
        Text = Text + message;
    }
    else if (ownership == "select_ownership") {
        let message = "Ownership not selected.\n";
        Text = Text + message;
    }
    else if (min_value == "") {
        let message = "min value not entered.\n";
        Text = Text + message;
    }
    else if (max_value == "") {
        let message = "max value not entered.\n";
        Text = Text + message;
    }
    else if (readFunction && !read_function_description) {
        let message = "Please Enter the description for Read function.\n";
        Text = Text + message;
    }
    else if (writeFunction && !write_function_description) {
        let message = "Please Enter the description for Write function.\n";
        Text = Text + message;
    }
    // If the validation pass then send data to the backend.
    else {
        var data = {
            "attribute_name": attributeName,
            "attribute_domain": category,
            "attribute_type": attributeType,
            "attribute_permission": attributePermission,
            "size": size,
            "read": readFunction,
            "write": writeFunction,
            "default":default_value,
            "discription":discription,
            "ownership":ownership,
            "max_value":max_value,
            "min_value":min_value,
            "read_function_description":read_function_description,
            "write_function_description":write_function_description,
            "attribute_number":attribute_number,
        };

        fetch('/update_header', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(data)
        })
            .then(response => {
                if (!response.ok) {
                    throw new Error('Network response was not ok');
                }
                return response.json();
            })
            .then(data => {
                Text = Text + data['message'] + "\n";
                out_window.value = Text;
            })
            .catch(error => {
                console.error('There was a problem with the POST request:', error);
            });
    }
    out_window.value = Text;
}

function isValidString(inputString) {
    // Regular expression pattern to match only alphanumeric characters and underscores
    var pattern = /^[A-Z0-9_]+$/;
    return pattern.test(inputString);
}

function handleOptionSelection(selectedValue) {
    var updateHeaderUrl = '/' + selectedValue;
    fetch(updateHeaderUrl, {
        method: 'GET',
        headers: {
            'Content-Type': 'application/json'
        }
        })
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            return response.json();
        })
        .then(data => {
            var input = document.getElementById("attribute_number");
            input.value = data.Last_value;
        })
        .catch(error => {
            console.error('There was a problem with the GET request:', error);
        });
}

var selectElement = document.getElementById("categorySelection");
var default_value = document.getElementById("Default-value");
var set_zero = document.getElementById("set-default");
var set_zero_expanded = document.getElementById("default-zero");
var pathInput = document.getElementById("pathInput");
var get_paths = document.getElementById("get-paths");

get_paths.addEventListener("click", function() {
    var pathInput = document.getElementById("pathInput").value;
    fetch(`/get_paths?path=${pathInput}`, {
        method: 'GET',
        headers: {
            'Content-Type': 'application/json'
        }
    })
    .then(response => {
        if (!response.ok) {
            throw new Error('Network response was not ok');
        }
        return response.json();
    })
    .then(data => {
        var out_window = document.getElementById("output");
        // Existing text
        var Text = out_window.value;
        Text = Text + "\nFile Paths Start----------------------------------------\n"
        // Append paths to existing text
        Text += "Paramnum : " + data["paramnum_dir"] + "\n";
        Text += "Parstruc : " + data["parstruc_dir"] + "\n";
        Text += "Attribute List : " + data["attribute_list_dir"] + "\n";
        Text += "Attribute Info : " + data["attribute_info_dir"] + "\n";
        Text += "Attribute Access : " + data["attribute_access_h_dir"] + "\n";
        Text += "Attribute Access : " + data["attribute_access_c_dir"] + "\n";
        Text += "Deftable : " + data["deftable_dir"] + "\n";
        Text += "Parinfo : " + data["parinfo_dir"] + "\n";
        // Update output element with the concatenated text
        Text = Text + "File Paths End------------------------------------------\n"
        out_window.value = Text;
    })
    .catch(error => {
        console.error('There was a problem with the GET request:', error);
        // Handle error here if needed
    });
})

pathInput.addEventListener('input', function() {
    var path = pathInput.value;
    // You can use fetch API to send the file to your server
    var data = {
        "path":path,
    }
    fetch('/path', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify(data)
    })
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            return response.json();
        })
        .then(data => {
            if (data['success']) {
                pathInput.style.borderColor = 'green';
            }else {
                pathInput.style.borderColor = 'red';
            } 
        })
        .catch(error => {
            console.error('There was a problem with the POST request:', error);
            pathInput.style.borderColor = 'red';
        });
});

function isTenthColumn(event) {
    var textarea = event.target;
    var caretPosition = textarea.selectionStart;
    var lines = textarea.value.split('\n');
    var currentLine = textarea.value.substr(0, caretPosition).split('\n').length - 1;
    var currentColumn = lines[currentLine].split(',').length;
    return currentColumn === 11;
}

default_value.addEventListener("input", function(event) {
    if (isTenthColumn(event)) {
        event.target.value += '\n';
    }   
});

set_zero.addEventListener("click", function(event) {
    default_value.value = "";
    var number = document.getElementById("size").value;

    const denominations = [2000, 1000, 500, 256, 200, 100, 50, 20, 10, 4, 1];
    let result = {};
    
    denominations.forEach(denomination => {
        result[denomination] = Math.floor(number / denomination);
        number %= denomination;
    });
    
    var text = "";
    Object.entries(result).forEach(([denomination, factor]) => {
        if (factor !== 0) {
            if (denomination == 1){
                for(var i=0; i<factor; i++){
                    text = "_x1(0), " + text; 
                }                 
            } else {
                text = "_x" + denomination + "(0), " + text;
            }            
        }
    });
    default_value.value = text;
});

set_zero_expanded.addEventListener("click", function(event) {
    default_value.value = "";
    var number = document.getElementById("size").value;
    var text = "";
    var number_of_lines =  Math.floor(number/10);
    var remainder = number%10;

    for (var i=0; i<number_of_lines; i++) {
        text = text + "0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\n"
    }
    for (var j=0; j<remainder; j++) {
        text = text + "0x00, "
    }
    default_value.value = text;

});

selectElement.addEventListener("change", function (event) {
    var selectedOption = selectElement.options[selectElement.selectedIndex];
    handleOptionSelection(selectedOption.value);
});

var selectSize = document.getElementById('attribute-type');

selectSize.addEventListener("change", function (event) {
    DataType_selection(selectSize.value)
    var button1 = document.getElementById("default-zero");
    var button2 = document.getElementById("set-default");
    if (selectSize.value == "ARRAY" || selectSize.value == "STRING") {       
        button1.disabled = false;
        button2.disabled = false;
    } else {
        button1.disabled = true;
        button2.disabled = true;
    }
})

function capitalizeInput(input) {
    input.value = input.value.toUpperCase();
}

function reset() {
    var category = document.getElementById("categorySelection");
    var attributeName = document.getElementById("attributeName");
    var attributeNamber = document.getElementById("attribute_number");
    var attributeDiscription = document.getElementById("discription");
    var out_window = document.getElementById("output");

    category.value = "NOT_SELECTED";
    attributeName.value = "";
    attributeNamber.value = "";
    attributeDiscription.value = "";
    out_window.value = "";
}

function DataType_selection(type) {
    var sizeinput = document.getElementById("size");
    var unit = document.getElementById("size-of-attibute");
    if (type == 'BYTE') {
        sizeinput.value = 1;
        sizeinput.classList.add("hidden");
        unit.classList.add("hidden");
    }
    else if (type == 'WORD') {
        sizeinput.value = 2;
        sizeinput.classList.add("hidden");
        unit.classList.add("hidden");
    }
    else if (type == 'DWORD') {
        sizeinput.value = 4;
        sizeinput.classList.add("hidden");
        unit.classList.add("hidden");
    }
    else if (type == 'FLAG') {
        sizeinput.value = 1;
        sizeinput.classList.add("hidden");
        unit.classList.add("hidden");
    }
    else {
        sizeinput.value = null;
        sizeinput.classList.remove("hidden");
        unit.classList.remove("hidden");
    }

}
