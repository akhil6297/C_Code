#include <stdio.h>

 __attribute__((noreturn)) void doneCoding(){
    printf("Entered No return function\n");
}

int main(){
    printf("Entered Main function\n");
    doneCoding();
    printf("Exiting Main function\n");

    // exit(0);

    return 0;
}

// void doneCoding() {
//     printf("Entered No return function\n");
// }