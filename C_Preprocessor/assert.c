/* assert.c -- use assert() */
#include <stdio.h>
#include <math.h>
#include <assert.h>

int main()
{
int z;
puts("Enter a number greater than or equal to 0 ");
scanf("%d", &z);
//assert(z >= 0);
if(z>0){
printf("answer is %lf\n", sqrt(z));
puts("Done");
return 0;
}
printf("Still in the code here");
}