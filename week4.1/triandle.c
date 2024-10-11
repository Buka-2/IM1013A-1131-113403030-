#include<stdio.h>
int main(void){
    int num0;
    int num1;
    int num2;
    int num3;
    int Num1;
    int Num2;
    int Num3;
    puts("please enter three lengths of a triangle");
    scanf("%d",&num1);
    puts("please enter the second length");
    scanf("%d",&num2);
    puts("please enter the last length");

    scanf("%d",&num3);
    Num1=num2^2+num3^2;
    printf("%d",Num1);
    if(Num1=num1*num1){
        puts("this is a right triangle");

    }
    Num2=num3*num3+num1*num1;
    else if(Num2=num2*num2){
        puts("this is a right triangle");
    }
    Num3=num1*num1+num2*num2;
    else if(Num3=num3*num3){
        puts("it is a right triangle");
    }
    eif (num1+num2>num3){
        puts("it is a triangle");}
    else{puts("it is not a triangle");}

    
}