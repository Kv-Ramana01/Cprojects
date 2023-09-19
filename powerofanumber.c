#include <stdio.h>

int main()
{
int number, power, result = 1;

printf("Enter a number and power ");
scanf("%d %d", &number , &power);

for(int i = 0; i< power; i++)
{
    result = result* number;
}
printf(" %d ^ %d = %d", number, power, result);


    return 0;
}