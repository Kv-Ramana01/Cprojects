#include <stdio.h>

int main(){

 int x = 'X';
 int y = 'Y';
 char temp;

 temp = x;
 x = y;
 y = temp;

 printf(" \nx : %c", x);
 printf("\ny : %c", y);







    return 0;
}