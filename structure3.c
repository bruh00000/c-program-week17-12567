;//Structure in c-program
#include <stdio.h>
#include <string.h>

struct person
{
    /* data */
    char name[50];
    int identNumber;
    float salary;
};
//struct person per1, per2;


struct child{
    struct person person1, person2;
    int age;
}child1;

int callperson(){
    //assign value to name of per1 variables
    strcpy(child1.person1.name, "Mark Zuckerberg");
    child1.person1.identNumber = 1001;
    child1.person1.salary = 2500;
    //print struct variable
    printf("Identifi   Number Name        Salary\n");
    printf("%d", child1.person1.identNumber);
    printf("       %s", child1.person1.name);
    printf("    %.2f\n", child1.person1.salary);

    //assign value to name of per1 variables
    strcpy(child1.person2.name, "Mr.Elon Musk");
    child1.person2.identNumber = 1002;
    child1.person2.salary = 3000;
    //print struct variable
    printf("%d", child1.person2.identNumber);
    printf("       %s", child1.person2.name);
    printf("       %.2f", child1.person2.salary);
    return 0;
}
