#include<stdio.h>
int main(void){
    char spaceSign='*';
    char seatSign='X';
    int horizontal;
    int vertical;
    puts("please enter your seat number(x,y)");
    scanf("%d",&horizontal);
    scanf("%d",&vertical);
    for(int C=1;C<=6;C++)
    {
        if(C==1){
            printf("  ");
            C++;
        }
        int r=C-1;
        printf("%2dC",r);
    }
    printf("\n");
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            if(i==vertical && j==horizontal+1){
                printf("%3c",seatSign);
            }
            else if(j==1){
                printf("R%d",i);
            }
            else if(j==1&&i==1){
                printf("  ");

            }

            else
            printf("%3c",spaceSign);
        }
        printf("\n");
        }


}//end program