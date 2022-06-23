#include <stdio.h>

#define XNAME(a) var##a

#define PR(x) printf("The value of var" #x " is %d\n",var##x)

int main(){
    
    int XNAME(1)=100; // int var1 = 100;
    int XNAME(2)=200; // int var2=200;
    PR(1);
    PR(2);
    return 0;
}