#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char Board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void resetBoard();
void printBoard();
void printWinner(char);
int checkfreespaces();
char checkWinner();
void player1Move();
void player2Move();

int main()
{
  char winner = ' ';
  char response = ' ';
  
do{
  
  winner = ' ';
  response = ' ';
  resetBoard();
  
    while( winner == ' ' && checkfreespaces()!= 0 )
  { 
  
  printBoard();

  player1Move();
  winner = checkWinner();
  if(winner!= ' ' || checkfreespaces() ==0)
  {
    break;
  }
  player2Move();
  winner = checkWinner();
  if(winner!= ' ' || checkfreespaces() ==0)
  {
    break;
  }
}
 printBoard();
 printWinner(winner);
 
// printf("\n********************************\n");
 printf("\nDo you wish to play again? (Y/N) : ");
 //printf("\n********************************\n");

 getchar();
 scanf(" %c",&response);
 response = toupper(response);
 
}while(response == 'Y');

 printf("\nThanks for playing!");

    return 0;
}

void resetBoard()
{
 for(int i = 0; i < 3; i++)
 {
    for(int j = 0; j < 3; j++)
    {
       Board[i][j] = ' ';
    }
 }
   
}
void printBoard()
{
 
 printf("\n");
 printf("\n %c | %c | %c", Board[0][0], Board[0][1], Board[0][2]);
 printf("\n---|---|---");
 printf("\n %c | %c | %c", Board[1][0], Board[1][1], Board[1][2]);
 printf("\n---|---|---");
 printf("\n %c | %c | %c", Board[2][0], Board[2][1], Board[2][2]);
 printf("\n");

}
void printWinner(char winner)
{
 if( winner == PLAYER1)
 {
    printf("\nPLAYER1 WINS!");
 }else if( winner == PLAYER2)
 {
    printf("\nPLAYER2 WINS!");
 }else
 {
    printf("\nITS A TIE!");
 }
}
int checkfreespaces()
{
  int freespaces = 9;
  for(int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++ )
    {
        if(Board[i][j] != ' '){
            freespaces--;
        }
    }
  }
  return freespaces; //basically return 0;
}
char checkWinner()
{
 
 for(int i =0 ; i< 3; i++)
 {
    //for rows
   if(Board[i][0]== Board[i][1] && Board[i][0]== Board[i][2])
   {
    return Board[i][0];
   }
 }
 for(int i =0 ; i< 3; i++)
 {   
   //for columns
   if(Board[0][i]== Board[1][i] && Board[0][i]== Board[2][i])
   {
    return Board[0][i];
   }
 }  
 for(int i =0 ; i< 3; i++)
 { 
   if(Board[0][0]== Board[1][1] && Board[0][0]== Board[2][2])
   {
    return Board[0][0];
   }
 }

 for(int i =0 ; i< 3; i++)
 {  
   if(Board[0][2]== Board[1][1] && Board[0][2]== Board[2][0])
   {
    return Board[0][2];
   }
 } 
    return ' ';

}
void player1Move()
{
 int x;
 int y;
 
 do{
 printf("\nEnter the # of row (1-3) : ");
 scanf("\n%d",&x);
 x--;
 
 printf("\nEnter the # of column (1-3) : ");
 scanf("\n%d", &y);
 y--;
 
  if(Board[x][y]!= ' ')
   {
    printf("INAVLID MOVE ");

  }else{

    Board[x][y]= PLAYER1;
    break;
  }
 }while(Board[x][y]!= ' ');
 
 

}
void player2Move()
{
 int x;
 int y;
 
 do{
 printf("\nEnter the # of row (1-3) : ");
 scanf("\n%d",&x);
 x--;
 
 printf("\nEnter the # of column (1-3) : ");
 scanf("\n%d", &y);
 y--;
 
  if(Board[x][y]!= ' ')
   {
    printf("INAVLID MOVE ");

  }else{

    Board[x][y]= PLAYER2;
    break;
  }
 }while(Board[x][y]!= ' ');
 /*srand(time(0));
 int x;
 int y;
 if(checkfreespaces() > 0)
 {
  do{ 
    
   x = rand()% 3;
   y = rand()% 3;
  
  }while(Board[x][y]!= ' ');

   Board[x][y] = COMPUTER;*/

 }/*else{
    printWinner(' ');
 }*/
//}