#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

const int MIN = 1;
const int MAX = 1000;
int guess;
int guesses = 0;
int answer;

srand(time(0));

answer = (rand() % MAX)+ MIN;

do{
   printf("\nGuess a number : ");
   scanf("%d", &guess);

   if(guess > answer)
   {
    printf("\nTOO HIGH!\n");

   }
   else if(guess < answer)
   {
    printf("\nTOO LOW!\n");
   }
   else
   {
    printf("\nCORRECT!\n");
   }
    guesses++;
}while(guess != answer);

printf("\nGG!WP!EZZ!\n");

 printf("\n*********************");
 printf("\nAnswer : %d", answer);
 printf("\nGuesses : %d", guesses);
 printf("\n*********************");


    return 0;
}