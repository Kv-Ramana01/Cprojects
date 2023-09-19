#include<stdio.h>
int main(){
    float p;
    float cp;
    float be;
    float math;
    printf("Enter your phy mark:");
    scanf("%f/n",&p);
    printf("Enter your computer programming marks:");
    scanf("%f/n",&cp);
    printf("Entr your basic electrical marks:");
    scanf("%f/n",&be);
    printf("Enter your maths mark");
    scanf("%f/n",&math);
    float sub[]={p,cp,be,math};
    float total=0;
    int cr;
    for(int i=0;i<4;i++){
        if (sub[i]>=90){
            int cr=10;
        }
        else if(sub[i]>=80 | sub[i]<=89){
             cr=9;
        }
        else if (sub[i]>=70 | sub[i]<=79){
             cr=8;
        }
        else if (sub[i]>=60 | sub[i]<=69){
             cr=7;
        } 
        else if (sub[i]<=59){
             cr=0;
        }
        total=total+cr*3;
    }
    float cgp=total/12;
    printf("your cgp is %f",cgp);
    

   
}