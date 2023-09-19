#include <stdio.h>

int main()
{
 char symbol;

 printf("Enter a symbol : ");
 scanf("%c", &symbol);
 
 for(int i =0 ; i< 5; i++)
 {
    for(int j = 0; j <i ; j++)
    {
        printf("%c ", symbol);
    }
    printf("\n");
 }
 for(int i = 5; i > 0 ; i--)
 {
    for(int j = 0; j < i ; j++)
    {
        printf("%c ", symbol);
    }
    printf("\n");
 }



    return 0;
}