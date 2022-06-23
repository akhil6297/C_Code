#include <stdio.h>

#define sqr(x) x*x //not very efficient

int main(){
    int num;
    printf("Enter the number\n ");
    scanf("%d", &num );

    double square= sqr(num+2); // num+(2*num)+2= 10 + 20 +2 =32
    printf("Square of the number is %lf\n", square);

    // double square2= square_num(num);
    // printf("Square of the number is %lf\n", square2);

    return 0;
}

int square_num(int a){
    return a*a;
}






/*
Wherever the definition shows an x , the preprocessor
substitutes the characters x+2 . Therefore,
x*x
becomes
x+2*x+2
The only multiplication is 2*x . If x is 10 , this is the value of this expression:
10+2*10+2 = 10 + 20 + 2 = 32
*/