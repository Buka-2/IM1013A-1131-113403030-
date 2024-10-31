#include<stdio.h>
int main(void){
    char spaceSign='*';
    char seatSign='X';
    int horizontal;
    int vertical;
    puts("please enter your seat number(x,y)");
    scanf("%d",&horizontal);
    scanf("%d",&vertical);
    for(int R=1;R<=10;R++)
    {
        if(R==1){
            printf("  ");
            R++;
        }
        int r=R-1;
        printf("%2dR",r);
    }
    printf("\n");
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==vertical && j==horizontal+1){
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