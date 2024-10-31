#include<stdio.h>
int main(void){
    puts("please enter a number and i will tell you all the prime number between it and 2");
    int finish;
        scanf("%d",&finish);
    for(int i =2;i<=finish-1;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            if(j==i-1){
                printf("%d\n",i);
            }
        }



    }//end outter for
}//end program    int finish;
