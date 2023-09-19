#include <stdio.h>

int main()
{

 int numbers[3][3] = {{2, 3, 4},{5, 6, 7},{8,9,10}};

   //int numbers[2][3];

   int rows = sizeof(numbers)/sizeof(numbers[0]);
   int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

   printf("rows : %d\n", rows);
   printf("columns : %d\n", columns);

   /*numbers[0][0] = 2;
   numbers[0][1] = 3;
   numbers[0][2] = 4;
   numbers[1][0] = 5;
   numbers[1][1] = 6;
   numbers[1][2] = 7;*/

   for(int i = 0; i < rows; i++)
  {
     for(int j = 0; j< columns; j++)
     {
       printf("%d ",numbers[i][j]); //dont forget to give gap after %d warna numbers without space 
                                   // print hoga
     }
     printf("\n");
  }





    return 0;
}