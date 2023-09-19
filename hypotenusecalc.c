#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("\nEnter the value of side A");
    scanf("%lf",&A);

    printf("\nEnter the value of side B");
    scanf("%lf",&B);

    C = sqrt(A*A + B*B);

    printf("\nValue of C : %lf",C);


   return 0;
}