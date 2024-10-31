#include<stdio.h>
int main(void){
    float firstNum;
    float secondNum;
    float resultNum;
    int option;
    int pause;
    puts("please enter two numbers");
    scanf("%f",&firstNum);
    scanf("%f",&secondNum);
    puts("please select a option\n1.Additon\n2.Substraction\n3.Mutiplication\n4.Division\n5.End Program ");
    while((option=getchar())&&pause!=1){
        switch(option){
            case '1':
            resultNum=firstNum+secondNum;//Addition
            printf("%2.f+%2.f=%2.f\n",firstNum,secondNum,resultNum);
            break;

            case'2':
            resultNum=firstNum-secondNum;
            printf("%2.f-%2.f=%2.f\n",firstNum,secondNum,resultNum);
            break;

            case'3':
            resultNum=firstNum*secondNum;
            printf("%2.f*%2.f=%2.f\n",firstNum,secondNum,resultNum);
            break;

            case'4':
            resultNum=firstNum/secondNum;
            printf("%2.f/%2.f=%2.f\n",firstNum,secondNum,resultNum);
            break;

            case'5':
            puts("bye bye\n");
            pause=1;
            break;

            case' ':
            case'\n':
            case'\t':
            break;


            default:
            puts("invalid number");


          
            

        }//end switch
    }//end while

}