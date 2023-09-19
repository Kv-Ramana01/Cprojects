#include <stdio.h>

int main()
{
 char symbol;
 int rows;
 
 printf("Enter a symbol : ");
 scanf("%c", &symbol);
 printf("\nEnter # of rows : ");
 scanf("%d", &rows);
 printf("\nno of rows : %d ", rows);


 for(int i = 0; i < rows; i++ )
 {
    for(int j = rows; j > i ; j--)
    {
        printf(" ");
    }
    
    for (int z = 0; z < i; z++)
    {
        printf("%c ", symbol);
    }
    printf("\n");
 } 




    return 0;
}