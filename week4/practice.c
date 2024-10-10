#include<stdio.h>
int main(void){
    int NumOfStudents;
    int Countdown;
    int scoreofstudent;
    int countofstudent=1;
    float total;
    float average;


    Countdown=0;
    puts("please tell me how many grades do you want to calculate");
    scanf("%d",&NumOfStudents);
    while(Countdown<NumOfStudents){
        printf("please enter the score of the number %d student\n",countofstudent);
        countofstudent=countofstudent+1;
        scanf("%d",&scoreofstudent);
        total=total+scoreofstudent;
        Countdown=Countdown+1;
    }
    average=total/NumOfStudents;
    printf("the total score of students is %f \n",total);
    printf("the average of the students if %f \n",average);

    /*average=total/NumOfStudents;
    printf("the average of the students is %F",average);
    */
}