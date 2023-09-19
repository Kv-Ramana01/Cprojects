#include <stdio.h>


int findMax(int x , int y){


   // if(x > y){

       // return x;
   // }
    //else{

      //  return y;
    //}
    return(x > y) ? x : y;
}


int main(){



    int max = findMax(4, 5);

    printf("%d", max);




    return 0;
}