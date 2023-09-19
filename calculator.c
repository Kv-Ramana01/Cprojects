#include <stdio.h>

int main(){

    char op;
    double num1;
    double num2;
    double result;


    printf("\nEnter your operator (+ - * /) : ");
    scanf("%c", &op);


     printf("enter num1 : ");
     scanf("%lf", &num1);

     printf("enter num2 : ");
    scanf("%lf", &num2);

    switch(op){
        case '+' :
            result = num1 + num2;
            printf("\nresult : %lf", result);
            break;

        case '-' :
            result = num1 - num2;
            printf("\nresult : %lf", result);
            break;
        
        case '*':
         result = num1 * num2;
         printf("\nresult: %.4lf", result);
         break;
         
      case '/':
         result = num1 / num2;
         printf("\nresult: %lf", result);
         break;

         default :
           printf("%c is invalid", op);

        
    }


    return 0;
}