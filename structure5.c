;//Structure in c-program
#include <stdio.h>
#include <string.h>

typedef struct
{
    /* data */
    char name[50];
    int identNumber;
    float salary;
}person;
//struct person per1, per2;

int callperson()
{   
    person per[3];
    //assign value to name of per1 variables
    for (int i = 0; i < 3; i++)
    {
        printf("Enter identNumber : ");
        scanf("%d",&(per[i].identNumber));

        printf("Enter Salary : ");
        scanf("%f",&(per[i].salary));

        printf("Enter Name : ");
        scanf("%s",&(per[i].name));
        //gets(per[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d %d: %.2f: %s\n",i+1, per[i].identNumber, per[i].salary, per[i].name);
    }
    

    //strcpy(per1.name, "Mark Zuckerberg");
    //per1.identNumber = 1001;
    //per1.salary = 2500;
    //print struct variable
    //printf("Identifi   Number Name        Salary\n");
    //printf("%d", p1.identNumber);
    //printf("       %s", p1.name);
    //printf("    %.2f\n", p1.salary);

    //assign value to name of per1 variables
    //strcpy(p2.name, "Mr.Elon Musk");
    //p2.identNumber = 1002;
    //p2.salary = 3000;
    //print struct variable
    //printf("%d", p2.identNumber);
    //printf("       %s", p2.name);
    //printf("       %.2f", p2.salary);
    return 0;
}
