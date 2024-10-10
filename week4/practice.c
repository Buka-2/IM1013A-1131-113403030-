#include<stdio.h>
int main(void){
    int NumOfStudents;
    int countdown;
    int scoreofstudent;
    int countofstudent=1;
    float total=0;
    float average;


    countdown=0;
    puts("please tell me how many grades do you want to calculate");
    scanf("%d",&NumOfStudents);
    if(NumOfStudents<0){
        puts("the number of the students iss not valid");
    }
    else{
    while(countdown<NumOfStudents){
        printf("please enter the score of the number %d student\n",countofstudent);
        scanf("%d",&scoreofstudent);
        if(scoreofstudent<0){
            countdown=countdown+100;
            puts("the score is not valid");}
            if(scoreofstudent>100){
                countdown=countdown+100;
                puts("the score is not valid");
            }
        countofstudent=countofstudent+1;
        total=total+scoreofstudent;
        countdown=countdown+1;
    }
    if(countdown<50){
    
    average=total/NumOfStudents;
    printf("the total score of students is %f \n",total);
    printf("the average of the students if %f \n",average);
    }}}
    /*average=total/NumOfStudents;
    printf("the average of the students is %F",average);
    */
