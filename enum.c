#include <stdio.h>

enum Day{Sun = 1, Mon =2 , Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7};

int main()
{
 //char day[12];
 enum Day today = Mon;

 /*printf("\nEnter the day");
 scanf("%s", day);*/

 //printf("%d", today); //Enums arent STRINGS but they can be treated as int 

 if(today == Sun || today == Sat)
 {

    printf("\nYahoo its the weekend!");
 }else
  {
    printf(" Nah man gotta go to work");
  }


    return 0;
}