#include <stdio.h>

int main(){
    // constants = fixed value that cannot be altered by the program during its execution
    const float PI = 3.147;

    // arithmetic operators go brrrr
    int x = 10;
    int y = 21;
    int z = x + y;
    int a = 7;
    int b = 2;
    float d = 3;
    float e = a/d;
    float c = a/b;//will give you a integer a whole number without no deimals innit

    float g = a/(float)b;//will give you the exact number even the decimal and shi like 3.5
    
    int v = a % b; // modulus gives you the remainders
    x++;// increment in x can also be written as x = x + 1 or x+ = 1
    y++;// decrement in y


    printf("%f\n",c);
    printf("%.3f\n",PI);
    printf("%d\n",z);
    printf("%.1f\n",e);
    printf("%.1f\n",g);
    printf("%d\n",v);
    printf("%d\n",y);



    return 0;



}