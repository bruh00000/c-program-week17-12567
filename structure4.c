;//Structure in c-program
#include <stdio.h>
#include <string.h>

typedef struct person
{
    /* data */
    char name[50];
    int identNumber;
    float salary;
}person;
//struct person per1, per2;

int callperson()
{   
    person p1, p2;
    //assign value to name of per1 variables
    strcpy(p1.name, "Mark Zuckerberg");
    p1.identNumber = 1001;
    p1.salary = 2500;
    //print struct variable
    printf("Identifi   Number Name        Salary\n");
    printf("%d", p1.identNumber);
    printf("       %s", p1.name);
    printf("    %.2f\n", p1.salary);

    //assign value to name of per1 variables
    strcpy(p2.name, "Mr.Elon Musk");
    p2.identNumber = 1002;
    p2.salary = 3000;
    //print struct variable
    printf("%d", p2.identNumber);
    printf("       %s", p2.name);
    printf("       %.2f", p2.salary);
    return 0;
}
