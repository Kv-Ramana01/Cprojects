#include <stdio.h>

int main() 
{
int inputArray[500],outputArray[500];
int elementcount;

printf("Enter the number of elements in array : ");
scanf("%d", &elementcount);
printf("\nEnter %d elements : \n", elementcount);

for(int i = 0; i <elementcount; i++)
{
    scanf("%d", &inputArray[i]);
}
for(int i = 0; i< elementcount; i++ )
{
    outputArray[i] = inputArray[elementcount - i -1];
}

printf("Reverse of array : ");
for(int i = 0; i< elementcount; i++)
{
    printf("%d ",outputArray[i] );
}


    return 0;
}