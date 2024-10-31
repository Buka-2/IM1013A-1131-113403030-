#include<stdio.h>
int main(void){
    char spaceSign='*';
    char seatSign='X';
    for(int R=1;R<=7;R++)
    {
        if(R==1){
            printf("  ");
            R++;
        }
        int r=R-1;
        printf("%2dR",r);
    }
    printf("\n");
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(i==3 && j==5){
                printf("%3c",seatSign);
            }
            else if(j==1){
                printf("C%d",i);
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