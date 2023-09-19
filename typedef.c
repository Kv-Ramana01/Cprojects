#include <stdio.h>


typedef struct 
{

char name[25];
char password[25];
char id[25];


}user;


int main()
{

 user user1 = {"Ramana", "Password123" ,"123456789"};
//user1 class he and name password id uska objects! car ek class he uska steering wheel wagera uska object
 printf("\n%s", user1.name);
 printf("\n%s",user1.password);
 printf("\n%s", user1.id);




    return 0;
}