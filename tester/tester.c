#include <stdio.h>
#include <parstruct.h>
#include <assert.h>


//#define ATT_NAME(name)  ATT_##_
#define MAX_INFO 100

typedef struct ATTRIBUTE_INFO_ {
    byte a,
    byte b
} ATTRIBUTE_INFO;

ATTRIBUTE_INFO att_info[MAX_INFO] = {
    #include "attribute_info.i"
}

ATTRIBUTE_LIST att_list[MAX_INFO] = {
    #include "attribute_info.i"
}

PARAMBUF_T global;

   


int main(){
    global.bit_pars.pasindu = 1;
    assert(global.bit_pars.pasindu = 1);
    global.bit_pars.pasindu = 0;
    assert(global.bit_pars.pasindu = 0);


    return 0;
}