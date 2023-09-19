#include <stdio.h>
//issues.. concept not clear
int main()
{
 FILE *pF = fopen("C:\\Users\\k v ramana\\Desktop\\code.txt", "r");
 char buffer[255];

 fgets(buffer , 255,pF);
 printf("%s", buffer);
 

 fclose(pF);



    return 0;
}