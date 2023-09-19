#include <stdio.h>

int main()
{

/*FILE *pF = fopen("text.txt", "a");

fprintf(pF , "\nso this is how you write a file");

fclose(pF);*/


if(remove("text.txt") == 0){
 printf("The file was deleted!");

}else{

    printf("File wasnt deleted!");
}


    return 0;
}