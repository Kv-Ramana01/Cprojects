
#include <stdio.h>

int main(){


    char name[25]; //bytes
    int age;
    int date;
    char month[25];

    // scanf only works if there is no gap btwn wors like ramana and if i write kv ramana it wont work properly
  //use this command if you have gaps in btwn fgets(name, 25, stdin); 
  //stdin means standard input
    printf("\nWhat is your name?");
    scanf("%s", &name);
    
    printf("\nHow  old are you?");
    scanf("%d", &age);// used to accept user input put & before age for it to work "&" is the address of operator
  
    printf("\nOH! when is your birthday?");
    scanf("%d", &date);

    printf("\nand month?");
    scanf("%s", &month);



    printf("\nYour name is %s\n",name);
    printf("\nYou are %d years old\n", age);
    printf("\n i remember! its on %d!\n",date);
    printf("\nand the month is!! %s\n",month);
    

    return 0;
}
