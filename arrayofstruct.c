#include <stdio.h>

typedef struct
{
char name[25];
float cgp;
}student;


int main()
{

 student student1 = {"Peter" , 7.8};
 student student2 = {"Harry" , 8.8};
 student student3 = {"Jason" , 6.0};
 student student4 = {"alex" , 9.2};

 student students[] = {student1, student2, student3, student4};

 for(int i =0 ; i< sizeof(students)/sizeof(students[0]); i++)
 {
   printf("%-12s\t", students[i].name);
   printf("%.2f\n", students[i].cgp);

 }






    return 0;
}