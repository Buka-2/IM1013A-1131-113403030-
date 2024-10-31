#include<stdio.h>
int main(void){
    puts("please enter a number and i will tell you if it`s a prime number");
    int Prime;
    int Remain;
    scanf("%d",&Prime);
    if(Prime==1){
        puts("it is a Prime number");
    }
     if(Prime==0){
            printf("%dis not a prime number\n",Prime);
            
        }
        else {
    for(int i=2;i<=Prime;i++){
        Remain=Prime%i;
        
        
         if(Remain==0){
            printf("%d is not a prime number\n",Prime);
            break;
        }
        if(i==Prime){
            printf("%d is a prime number\n",Prime);

        }
    }
       



    }
}
