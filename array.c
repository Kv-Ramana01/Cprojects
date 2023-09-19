#include <stdio.h>

int main(){
  
  double prices[] = {5.0, 10.0, 15.0 ,25.0 , 30.0, 35.0, 40.0, 45.0, 50.0,600.0};

  //printf("%dbytes/n", sizeof(prices));

  for( int i = 0;i < sizeof(prices)/sizeof(prices[0]); i++ )
  {

    printf("$%.2lf\n",prices[i]);
  }



    return 0;
}