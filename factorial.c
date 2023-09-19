#include <stdio.h>


int main(){

int factorial = 1;
int N;

do{ 
printf("\nEnter a number to get its factorial : ");
scanf("%d", &N);
if(N < 0)
{
    printf("\nINVALID! Enter a positive number!\n");
}
}while(N < 0);

for(int i = 1 ; i<= N; i++)
{
    factorial = factorial * i;
}
 
 printf("\nthe factorial of %d is %d\n", N , factorial);



    return 0;
}