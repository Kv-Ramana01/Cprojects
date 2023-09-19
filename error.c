#include <stdio.h>

int main(){

   char operator;
   double num1;
   double num2;
   double r;

   printf("\nEnter the operator");
   scanf("%c", &operator);
    
    printf("\nEnter the num1 :");
    scanf("%lf", &num1);

    printf("\nEnter the num2 :");
    scanf("%lf", &num2);

    switch(operator){

      default :
       printf("%c is inavlid", operator);

      case '+' :
        r = num1 + num2;
        printf("r : %lf",r);

        break;

      case '-' :
        r = num1 - num2;
        printf("r : %lf",r);

        break;
      case '*' :
        r = num1 * num2;
        printf("r : %lf",r);

        break;
      case '/' :
        r = num1 / num2;
        printf("r : %lf",r);

        break;



    }


   return 0;
}