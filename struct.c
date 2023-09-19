#include <stdio.h>
#include <string.h>

struct player
{
  char name[15];
  int score;
};

int main()
{


 struct player player1;
 struct player player2;

 strcpy(player1.name, "Ramana");
 strcpy(player2.name, "Charlotte");

 player1.score = 250;
 player2.score = 300;

 printf("\n%s", player1.name);
 printf("\n%d", player1.score);

 printf("\n%s", player2.name);
 printf("\n%d", player2.score);



    return 0;
}