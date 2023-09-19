/*
#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age");
    scanf("%d", &age);

    if(age >= 20){
        printf("you are eligible to sign up");

    }
    else if(age == 0){// else if akela nahi bracket ke saath rehts
        printf("hell nah");
    }
    else{// else akele rehta
        printf("lol");


    }

    //switch is a better command if there are many else if statements

    return 0;
}
*/



#include <stdio.h>

int main(){


    char grade;

    printf("What is your grade?");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
        printf("Noice");
        break;

        case 'B' :
        printf("good");
        break;

        default: 
        printf("add something valid broski");

        //switch(grade){

          //  case 'A':
            //njdjnfjjnfj
            //break;
        //}



    }






    return 0;
}