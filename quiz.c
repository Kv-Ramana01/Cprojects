#include <stdio.h>
#include <ctype.h>


int main()
{
 char questions[][100]= {"a pyro character who uses claymore as a weapon ?",
                        "who is the fish of genshin?",
                        "what weapon does raiden shogun use?"};

 char options[][100]= {"A.Diluc","B.Amber","C.Hutao", "D.Dehya",
                       "A.KOKONUTZ","B.Jellyfish", "C.Gorou", "D.ITTO DA!",
                       "A.Claymore","B.Sword","C.Polearm","D.Catalyst"};
 char answers [3] = {'A', 'A', 'C'};
 int numberofquestions = sizeof(questions)/sizeof(questions[0]);

 int score = 0;
 char guess;

 printf("GENSHIN QUIZ GAME!\n");

 for(int i = 0; i < numberofquestions; i++)
 {
    printf("********************\n");
    printf("%s\n", questions[i]);
    printf("********************\n");
    
    for(int j = (i * 4); j< (i * 4)+ 4 ; j++){

        printf("%s\n",options[j]);
    }
    printf("guess: ");
    scanf("%c" , &guess);
    scanf("%*c"); //scanf("%c") when i use this command ill get wrong answers even if i type them correct
//so use scanf("%*c");to fix this problem
    guess = toupper(guess);

    if(guess == answers[i])
    {
        printf("CORRECT!\n");
        score++;
        
    }
    else
    {
        printf("WRONG!\n");
        printf("Answer is %c\n", answers[i]);   
    }   

 }                
 printf("********************\n");
 printf("FINAL SCORE : %d/%d\n", score ,numberofquestions);
 printf("********************\n");

    return 0;
}