#include<stdio.h>
int main(void){
    int Ascore=0;
    int Bscore=0;
    int Cscore=0;
    int Dscore=0;
    int Escore=0;
    float num1;
    float num2;
    float num3;
    int error=0;
    puts("please enter three score of the student,and i will classify into 5 class for you");
    puts("please enter the score of the first student");
    scanf("%f",&num1);
    if (num1>100){
        puts("the number is not valid");
        error=error+1;
    }
    if (num1<0){
        puts("the number is not valid");
        error=error+1;
    }
    if (error=0){
     if (num1>=90){
        Ascore=Ascore+1;
    }
    else if (num1>=80){
        Bscore=Bscore+1;
    }
    else if (num1>=70){
        Cscore=Cscore+1;
    }
    else if (num1>=60){
        Dscore=Dscore+1;
    }
    else {Escore=Escore+1;};
    puts("please enter the score of the second student");
    scanf("%f",&num2);
    if (num2>100){
        puts("the number is not valid");
        error=error+1;
    }
    if(num2<0){
        puts("the number is not valid");
        error=error+1;
    }
    if(error=0){
     if (num2>=90){
        Ascore=Ascore+1;
    }
    else if (num2>=80){
        Bscore=Bscore+1;
    }
    else if (num2>=70){
        Cscore=Cscore+1;
    }
    else if (num2>=60){
        Dscore=Dscore+1;
    }
    else {Escore=Escore+1;}
    puts("please enter the last score");
    scanf("%f",&num3);
    if (num3>100){
        puts("the number is not valid");
        error=error+1;
    }
    if (num3<0){
        puts("the number is not valid");
        error-error+1;
    }
    if(error=0){
    if (num3>=90){
        Ascore=Ascore+1;
    }
    else if (num3>=80){
        Bscore=Bscore+1;
    }
    else if (num3>=70){
        Cscore=Cscore+1;
    }
    else if (num3>=60){
        Dscore=Dscore+1;
    }
    else {Escore=Escore+1;}
    printf("A (90 and above) : %dstudents\n",Ascore);
    printf("B (80-90) : %dstudent(s)\n",Bscore);
    printf("C (70-80) : %dstudent(s)\n",Cscore);
    printf("D (60-70) : %dstudent(s)\n",Dscore);
    printf("E (below 60) : %dstudent(s)\n",Escore);
}}}}