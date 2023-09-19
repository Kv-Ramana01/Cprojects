#include <stdio.h>

int main(){


    const double PI= 3.14;
    double radius;
    double circumference;
    double area;

    printf("\nwhat is the radius?");
    scanf("%lf", &radius);//dont forget the& or it wont work

    circumference= 2*PI*radius;
    area = PI*radius*radius;

    printf("\ncircumference : %lf",circumference);
    printf("\narea: %lf", area);


    return 0;

}