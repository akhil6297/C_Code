#include <stdio.h>

#define PI 3.14

int main(){
    int radius;
    printf("Enter the radius of circle\n ");
    scanf("%d", &radius );
    double area= PI*radius*radius; // 3.14*radius*radius
    printf("Area of the circle is %lf \n", area);

    // #undef PI
    // #define PI 4

    // double area2= PI*radius*radius;
    // printf("Area of the circle is %lf", area2);


    return 0;
}