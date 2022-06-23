#include <stdio.h>

#ifdef PI
    #define AR(x) printf("Area of circle is %lf", PI*x*x)
#else
    #define AR(x) printf("Area of figure is %d", x*x)
#endif

int main(){
    int dimension;
    printf("Enter dimension \n");
    scanf("%d",&dimension); 
    AR(dimension);

    return 0;
}