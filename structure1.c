;//Structure in c-program
#include <stdio.h>
#include <string.h>

struct person
{
    /* data */
    char name[50];
    int identNumber;
    float salary;
}per1, per2;

int callperson(){
    //assign value to name of per1 variables
    strcpy(per1.name, "Mark Zuckerberg");
    per1.identNumber = 1001;
    per1.salary = 2500;
    //print struct variable
    printf("Identifi   Number Name        Salary\n");
    printf("%d", per1.identNumber);
    printf("       %s", per1.name);
    printf("    %.2f\n", per1.salary);

    //assign value to name of per1 variables
    strcpy(per2.name, "Mr.Elon Musk");
    per2.identNumber = 1002;
    per2.salary = 2500;
    //print struct variable
    printf("%d", per2.identNumber);
    printf("       %s", per2.name);
    printf("       %.2f", per2.salary);
    return 0;
}
