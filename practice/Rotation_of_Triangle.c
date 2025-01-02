#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void transformTriangleintorotattedTriangle(size_t side, char rotatedArray[side][side],char array[side][side]){
   
    for(size_t i=0 ; i<side ;i++){
        for(size_t j=0; j<side ; j++){
            array[i][j]=rotatedArray[i][j];
        }
    }
}

void initializedfunction(size_t side , char array[side][side]){
    for(size_t i=0 ; i<side ; i++){
        for(size_t j=0 ; j<side ; j++){
            array[i][j]=' ';
        }
    }
}
void printffuntion(size_t side ,char array[side][side]){
    for(size_t i=0 ; i<side ; i++){
        for(size_t j=0 ; j<side ; j++){
            printf("%c",array[i][j]);
        }
        printf("\n");
    }
}
void ClockwiseRotateFunction(size_t side  ,char rotatedArray[side][side],char array[side][side]){
    
    for(size_t i=0 ; i<side ; i++){
        for(size_t j=0 ; j<side ; j++){
            rotatedArray[i][j]=array[side-1-j][i];
        }
    }
}
void counterclockwiseFunction(size_t side ,char rotatedTriangle[side][side],char array[side][side]){
    
    initializedfunction(side , rotatedTriangle);
    for(size_t i=0 ; i<side ; i++){
        for(size_t j=0 ;j<side ; j++){
            rotatedTriangle[i][j] = array[j][side - 1 - i];
        }
        
    }

}

int main(void){
    int stop=0;
    //to determine if the user wants to exit the program
    int size;
    //the side of the triangle
    printf("please enter the size of the triangle:");
    //prompt the user to enter the size of the triangle
    scanf("%d",&size);
    char Triangle[size][size];
    //the array of the triangle
    
    initializedfunction(size,Triangle);
    //initailize the elements of the triangle
    for(size_t i=0;i<size;i++){
        for(size_t j=0; j<size ; j++){
            if(j<=i){
                Triangle[i][j]='*';
            }
        }
    }
    printf("the initail triangle:\n");
    printffuntion(size,Triangle);
    int degree=0;
    char rotatedTriangle[size][size];
    while(stop==0){
        //if user don't enter 4 the program continue
        printf("1.print triangle\n2.rotate 90 degree\n3.specify rotation angle\n");
        int option;
        int rotate;
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("current degree:%d\n",degree);
            printffuntion(size,Triangle);
            break;

            case 2:
            ClockwiseRotateFunction(size,rotatedTriangle,Triangle);
            transformTriangleintorotattedTriangle(size,rotatedTriangle,Triangle);
            degree+=90;
            printf("current degree:%d\n",degree);
            printffuntion(size,Triangle);
            break;

            case 3:
            printf("please enter the number of the degree you want to rotate(90,180,270,360..)\n");
            scanf("%d",&rotate);
            while(rotate%90!=0){
                printf("invalid number. please enter again:");
                scanf("%d",&rotate);
            }
            degree+=rotate;
            for(size_t i=0 ; i<=rotate%90 ; i++){
                ClockwiseRotateFunction(size,rotatedTriangle,Triangle);
                transformTriangleintorotattedTriangle(size,rotatedTriangle,Triangle);
            }
            printf("current degree:%d\n",degree);
            printffuntion(size,Triangle);
            break;

            case 4:
            stop=1;

            default:
            break;
            
            }
        } 
    }
    
    
