#include <stdio.h>

double square(double x)
{
 double result = x*x;
 return result;

}

int main(){

  double x = square(3.9);
  printf("%lf\n",x);
   double y = square(8);
   printf("\n%lf", y);




    return 0;
}