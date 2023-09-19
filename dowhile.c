#include <stdio.h>

int main()
{
 
 int number ;
 int sum = 0;

printf("enter any number");
scanf("%d", &number);
if(number >=0){   
 do{

    printf("Enter a number number above 0\n");
    scanf("%d", &number);

    if(number > 0){
        sum+= number;

    }
 }while(number>0);
}
 printf("%d", sum);



return 0;
}
