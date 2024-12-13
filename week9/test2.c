#include<stdio.h>
#include<time.h>
#include<stdlib.h>
    
int main(void) {

     int hit[3];
     int number[9];

     for(int n=0; n<9 ; n++){
        number[n]=n+1;
     }
     //the game has 4 round
    for(int i=1 ; i<=4 ; i++){
    if(i==1){

        printf("Welcome to the Baseball Game!\n");

        // prsent the game interface to the user

        for(int j=1 ; j <=17 ; j++){

            if (j==2||j==4||j==8||j==10||j==14||j==16){
                printf("|");
            }
            if(j==6||j==12){
                printf("\n---+---+---\n");
            }
            
                if(j==1||j==3||j==5||j==7||j==9||j==11||j==13||j==15||j==17){

                printf(" %d ",number[(j-1)/2]);
        }
    }

    printf("\nEnter the number of th egrid you hit (1-9),or enter 0 if you missed:");
    scanf("%d",&hit[0]);

    if(hit[0]==0){
        printf("Missed, try again!!");

        // fighting the user
    }
    }

    if(i==2){
        number[hit[0]-1]=0;
        
        //let the number got hit equal to zero

        for(int j=1 ; j <=17 ; j++){

            if (j==2||j==4||j==8||j==10||j==14||j==16){
                printf("|");
            }
            if(j==6||j==12){
                printf("\n---+---+---\n");
            }
            
                if(j==1||j==3||j==5||j==7||j==9||j==11||j==13||j==15||j==17){

                printf(" %d ",number[(j-1)/2]);
        }
    }
     printf("\nEnter the number of th egrid you hit (1-9),or enter 0 if you missed:");
    scanf("%d",&hit[1]);

        //check if the user missed
    if(hit[1]==0){
        printf("Missed, try again!!");
    }

    //check if the user hit the same places

    if(hit[1]==hit[0]){
        printf("Sorry, you had hit this position, try again");

    }


    }

    if(i==3){
        number[hit[1]-1]=0;

        //let the number got hit equals to zero

        // show the interface again

        for(int j=1 ; j <=17 ; j++){

            if (j==2||j==4||j==8||j==10||j==14||j==16){
                printf("|");
            }
            if(j==6||j==12){
                printf("\n---+---+---\n");
            }
            
                if(j==1||j==3||j==5||j==7||j==9||j==11||j==13||j==15||j==17){

                printf(" %d ",number[(j-1)/2]);
        }
    }

    // ask the user to enter the number he hit
     printf("\nEnter the number of th egrid you hit (1-9),or enter 0 if you missed:");
    scanf("%d",&hit[2]);

        // check if the user miss

     if(hit[2]==0){
        printf("Missed, try again!!");
    }
    // check if the user hit the same places

    if(hit[2]==hit[1]||hit[2]==hit[0]){
         printf("Sorry, you had hit this position, try again");
    }
    }

    if(i==3){
        number[hit[2]-1]=0;

        // the the number got hit equal to zero
        //show the interface again
        for(int j=1 ; j <=17 ; j++){

            if (j==2||j==4||j==8||j==10||j==14||j==16){
                printf("|");
            }
            if(j==6||j==12){
                printf("\n---+---+---\n");
            }
            
                if(j==1||j==3||j==5||j==7||j==9||j==11||j==13||j==15||j==17){

                printf(" %d ",number[(j-1)/2]);
        }
    }
     printf("\nEnter the number of th egrid you hit (1-9),or enter 0 if you missed:");
    scanf("%d",&hit[3]);

    // ask users to enter the number he hit

    if(hit[3]==0){
        printf("Missed, try again!!");
    }

    if(hit[3]==hit[2]||hit[3]==hit[1]||hit[3]==hit[0]){
         printf("Sorry, you had hit this position, try again");
    }
    }

    if(i==4){

        //show the result of the game

        number[hit[3]-1]=0;
        for(int j=1 ; j <=17 ; j++){

            if (j==2||j==4||j==8||j==10||j==14||j==16){
                printf("|");
            }
            if(j==6||j==12){
                printf("\n---+---+---\n");
            }
            
                if(j==1||j==3||j==5||j==7||j==9||j==11||j==13||j==15||j==17){

                printf(" %d ",number[(j-1)/2]);
        }
    }


    //a series functions to check if the user wins


     if(number[0]==0&&number[1]==0&&number[2]==0){
        printf("Congradulation, you win!");
     }
     if(number[3]==0&&number[4]==0&&number[5]==0){
        printf("Congradulation, you win!");
     }
     if(number[6]==0&&number[7]==0&&number[8]==0){
        printf("Congradulation, you win!");
     }
     if(number[0]==0&&number[3]==0&&number[6]==0){
        printf("Congradulation, you win!");
     }
     if(number[1]==0&&number[4]==0&&number[7]==0){
        printf("Congradulation, you win!");
     }
     if(number[2]==0&&number[5]==0&&number[8]==0){
        printf("Congradulation, you win!");
     }
     if(number[0]==0&&number[4]==0&&number[8]==0){
        printf("Congradulation, you win!");
     }
     if(number[2]==0&&number[4]==0&&number[6]==0){
        printf("Congradulation, you win!");
     }

     //if user didn't win 

     else
     printf("\nGame over ,you didn't complete a line");
    }

}// end the final round 
}//end main