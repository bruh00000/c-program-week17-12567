//Structure in c-program
#include <stdio.h>
#include "structure5.c"

void display();
void main()
{
    printf("Structure\n");
    display(30);
    callperson();
}

void display(int count){
    for (int i = 0; i < count; i++)
    {
        printf("=");

    }
    printf("\n");
}