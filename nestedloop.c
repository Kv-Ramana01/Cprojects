#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;

    printf("\nEnter the # of rows :");
    scanf("%d", &rows);

    printf("\nEnter the # of columns : ");
    scanf("%d", &columns);
    
    /*scanf("%c");

    printf("\nEnter any symbol");
    scanf("%c", &symbol);*/
    

    for(int i=1; i <=rows; i++) //if rows is 3 then ek baar chala
    {                          //dusra baar chala
                            // third and last chala
        for(int j =1; j <=columns; j++) //if columns is 4 then is rotation me 4 baar chala
        {                               // dusra baar me bhi ye 4 baar chala        
            printf("%d",j);             // 3rd and last baar me 4 baar chala 
                                //first loop start hota he aurjitna value dhale utna baar chalta hai
                                 // second loop jitna value dhale utna baar ek rotation me chalta he
        }

        printf("\n");
    }





    return 0;
}