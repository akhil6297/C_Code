#include <stdio.h>


void dummy(){
    printf("Entered Dummy function after calling exit()\n");
}

int main(){
    atexit(dummy);
    printf("Entered Main function\n");

    printf("Exiting Main function\n");

    return 0;
}

