//palindrome is a number which remians the same after reversing it like 4232234
//and 5432 is not a palindrome  number as its value changes after revsersing 
#include <stdio.h>


int main()
{
int number , reversenumber = 0 ,rightdigit , temp;

printf("ENter a number : ");
scanf("%d", &number);

temp = number;

while(temp!= 0)
{
    rightdigit = temp % 10;
    reversenumber = (reversenumber * 10)  + rightdigit;

    temp = temp/10;

}

if( reversenumber == number)
{
    printf("\nthe number is palindrome .");
    printf("\nNumber : %d , Reverse : %d ", number , reversenumber);
}else
  {
    printf("\nthe number is not a palindrome .");
    printf("\nNumber : %d , Reverse : %d ", number , reversenumber);
  }


    return 0;
}