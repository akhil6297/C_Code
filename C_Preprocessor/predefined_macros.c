#include <stdio.h>

int main(){

    printf("The name of file is %s\n", __FILE__);
    printf("The date is %s\n", __DATE__);
    printf("The line number is %d\n", __LINE__);
    printf("The Compiler version of C here is %d\n", __STDC_VERSION__);
    printf("The TIME is %s\n", __TIME__);
    printf("The calling function is %s\n", __func__);

    dummy();
    return 0;
}

void dummy(){
    printf("The calling function is %s\n", __func__);
}