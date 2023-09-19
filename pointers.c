#include <stdio.h>

void print(int *pAge)
{

    printf("You are %d years old", *pAge);
}
int main()
{

 int age = 19;
 int *pAge = NULL;
 pAge = &age;
// int *pAge = &age;
 
 //printf("age : %d", *pAge);

 print(pAge);


    return  0;
}