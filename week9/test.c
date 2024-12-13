#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){


    int height;

    
    printf("please enter the height of the pyramid:\n");

    //prompt iser to enter the height

    scanf("%d",&height);
    printf("\n");

    while (height<1||height>9){
        printf("invalid number please enter again:\n");
        scanf("%d",&height);
     }
     
     // if the height is not in the range prompt user to enter again

     for(int i =1 ; i<=height ; i++){
        for(int j =1 ; j<=2*height-1 ; j++){
            if (j>height-i&&j<height+i){
                printf("%d",i);
            }

            
            else 
            printf(" ");

        }
        printf("\n");
     }

    





}//end main
