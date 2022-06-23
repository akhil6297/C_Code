#include <stdio.h>
#include <stdlib.h>

#define FMAX 2
#define NAME_SIZE 10

struct student {
    int rollno;
    char name[NAME_SIZE];
};

int main()
{
   
   struct student studs[FMAX];
   int i;
   while(i<FMAX){
    
   printf("Enter the %d th student details\n", i+1);
   scanf("%d", &studs[i].rollno);
   scanf("%s", &studs[i].name);
    i++;
   }
   i=0;
   while(i<FMAX){
    
   printf("The %d th student details are\n", i+1);
   printf("Roll number is %d\n", studs[i].rollno);
   printf("Name is %s\n", studs[i].name);
    i++;
   }
    return 0;
}