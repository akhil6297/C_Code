#include <stdio.h>

#define PI 3.14

#define PR(x) printf("The value of" #x "is %d\n",x)

int main(){
    
    int my_age=20;
    PR(my_age);

    return 0;
}