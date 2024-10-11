#include<stdio.h>
int main(void){
    int num1;
    int Num1;
    int num2;
    int Num2;
    int num3;
    int Num3;
    scanf("%d",&num1);   
    scanf("%d",&num2);
    scanf("%d",&num3);
    Num1=num2*num2+num3*num3;
     Num2=num1*num1+num3*num3;
     Num3=num1*num1+num2*num2;
    if (Num1=num1*num1){
        puts("it is a right triangle");
        }
   
    else if (Num2=num2*num2){
        puts("it is a right triangle");
    }
    
    else if (Num3=num3*num3){
        puts("it is a right triangle");
    }
    else if(num1+num2>num3){
        puts("it is a triangle");
    }
    else{puts("it is not a triangle");}
    

}