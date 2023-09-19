#include <stdio.h>
#include <stdbool.h>

int main(){

    int x;//declaration
    x = 123; //initialization
    int y = 321; //declaration + initialization

    int age = 19;        //integer
    float cgp = 8.0;// floating point number
    float cgp1 = 92.12;
    float cgp2 = 123.987;
    char grade = 'A';//single character
    char name[] = "broski";// array of characters
    unsigned short int lol = 45678;
    bool e = false;


    printf("hello %s\n",name);
    printf("I am %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your cgp is %f\n",cgp);
    printf("cgp 1 : %f\n",cgp1);
    printf("cgp 2 : %9.3f\n",cgp2);
    printf("%d\n",lol);
    printf("%d\n",e);

    
    return 0;
}