#include <stdio.h>


int main()
{


int l;
printf("Enter the length of the array : ");
scanf("%d", &l);
int array[l];

for(int i = 0; i < l; i++){

    printf("Enter the %d element : ", i+1);
    scanf("%d", &array[i]);
}

int size= sizeof(array)/sizeof(array[0]);


/*int l;
  printf("Enter the length of array: ");
  scanf("%d", &l);
 int array[l];
 for(int i = 0; i < l; i++){

  printf("Enter the %d element ", (i+1));
  scanf("%d", &array[i]);

 }
 int size = sizeof(array)/sizeof(array[0]);*/





    return 0;
}