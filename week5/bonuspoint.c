#include<stdio.h>
int main(void){
    
    for(int i=1;i<=2;i++){//print twice,first for excample,second for show the booking
    char space='*';
    char seat='X';
        if(i==1){//excample
        for(int j=1;j<=6;j++){
    
            if(j==1){
                printf("   ");
                //the space at the (1.1)
            }//end for
            else{
                j--;
                printf("C%d ",j);//the column for C1 to C5
                j++;
            }//end else
            
        }// end for
        
        
        printf("\n");
        for(int n=1;n<=4;n++){//row R1 to R4
            for(int k=1;k<=6;k++){//insert'*'into the spaces
                if(k==1){//insert R1 R2 R3 R4
                    printf("R%d",n);
                }//end if
                else{
                    printf("%2c ",space);
                }//end else
            }//end for
            printf("\n");
        }//end for
    }//end for end example
    if(i==2){
        int rownumber;
        int columnnumber;
        int error=0;
        while(error==0){
        printf("enter your row seat number:");
        scanf("%d",&rownumber);
        printf("enter yout column seat number:");
        scanf("%d",&columnnumber);
        if(rownumber>4||columnnumber>5||rownumber<1||columnnumber<1){;
            puts("invalid number");
        }//end if
        else(error--);
    }//end while
        for(int j=1;j<=6;j++){
    
            if(j==1){
                printf("   ");
                //the space at the (1.1)
            }//end for
            else{
                j--;
                printf("C%d ",j);//the column for C1 to C5
                j++;
            }//end else
        }// end for
        printf("\n");
        for(int n=1;n<=4;n++){
            for(int k=1;k<=5;k++){
                if(k==1){
                    printf("R%d",n);
                }//end if
                if(k==columnnumber&&n==rownumber){
                    printf("%2c ",seat);
                }//end if
                else{
                    printf("%2c ",space);
                }//end else
            }//end for
            printf("\n");
        }//end for
        puts("X is your seat");
        puts("thanks for your booking");
    }//end booking program
    }}//end program
