#include <stdio.h>
//concept clear
/*void sort(int array[],int size)
{
  for(int i = 0; i < size-1 ; i++)
  {
    for(int j = 0; j < size - i -1; j++)
    {
        if(array[j]>array[j+1])
        {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1]= temp;
        }
    }
  }

}
 void printarray(int array[], int size)
 {
    for(int i = 0; i < size; i++)
    {
       printf("%d ", array[i]);
    }
    printf("\n");
 }*/



int main()
{

 int l;
  printf("Enter the length of array: ");
  scanf("%d", &l);
 int array[l];
 for(int i = 0; i < l; i++){

  printf("Enter the %d element ", (i+1));
  scanf("%d", &array[i]);

 }
 int size = sizeof(array)/sizeof(array[0]);

 /*printarray(array, size);
 sort(array, size);
 printarray(array, size);*/






    return 0;
}