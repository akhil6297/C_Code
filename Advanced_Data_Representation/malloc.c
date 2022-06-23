#include <stdio.h>
#include <stdlib.h>

#define name_size 20

struct Emp
{
    /* data */
    int empno;
    char name[name_size];
};

typedef struct Emp Employee;

int main()
{

    Employee *e;

    printf("Enter number of employees\n");
    int num, i;
    scanf("%d", &num);

    e = (Employee *)malloc(num * sizeof(Employee));   // dynamic memory allocation

    while (i < num)
    {
        printf("ENter employee %d details\n", i + 1);
        scanf("%d", &e[i].empno);
        // printf("Number is %d\n", e[i].empno);
        scanf("%s", e[i].name);
        i++;
    }
    i = 0;
    while (i < num)
    {
        printf("Number is %d\n", e[i].empno);
        printf("Name is %s\n", e[i].name);
        i++;
    }

    return 0;
}