#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//the function to print the 2D array
void printffuntion(size_t side ,int array[side][side]){
    for(size_t i=0 ; i<side ; i++){
        for(size_t j=0 ; j<side ; j++){
            printf("%3d",array[i][j]);
        }
        printf("\n");
    }
}
//the function to initialize  the  elements of the 2D  array to 0
void initializedfunction(size_t side , int array[side][side]){
    for(size_t i=0 ; i<side ; i++){
        for(size_t j=0 ; j<side ; j++){
            array[i][j]=0;
        }
    }
}
//the function to transform the 2Darray to 1D array
void flattenMatrix(size_t rows, size_t columns, int matrix[rows][columns], int flat[]) {
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            flat[index] = matrix[i][j];
            index++;
        }
    }
}
//the funtion to transform the sub 2Darray to 1D array
void subflattenMatrix(size_t size , int matrix[size][size],int flat[]){
    int index =0;
    for(int i=0 ;i<size;i++ ){
        for(int j=0;j<size;j++){
            if(i<size-1&&j<size-1){
                flat[index]=matrix[i][j];
            }
        }
    }
}
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main(void){
    size_t side;
    //the size of the matrix

    printf("please enter the dimension of the matrix(range 3~10)");
    //prompt the users to enter the dimension of the matrix
    scanf("%lu",&side);
    while(side<3||side>10){
        printf("invalid number please enter again");
        scanf("%lu",&side);
    }
    // if the user didn't enter the valid number ask him to enter again
    int matrix[side][side];
    //the original matrix
    int flatmatrix[(side)*(side)];
    //the 1Darray of the original martix
    int subflatmatrix[(side-1)*(side-1)];
    //the 1Darray of the submatrix
    int maximum[2][2];
    //the final result of operation 2
    initializedfunction(2,maximum);
    srand(time(NULL));
    for(size_t i=0 ; i<side ; i++){
        for(size_t j=0 ; j<side ; j++){
            matrix[i][j]=rand()%99+1;
        }
    }
    //randomlly fill the element into original matrix
    printf("Generate %lu x %lu   matrix:\n",side,side);
    printffuntion(side,matrix);
    //show the user original matrix

    int stop=0;
    //the variable to determine if the user want to stop
    int index=0;
    //the variable to count the subflatarray

    while(stop==0){
        int option;
        printf("please select operation 1 or 2 or 3.\n Menu:\noperation 1: Flattern Matrix\noperation 2.Compress Matrix\noperation 3.Exit the program\nEnter you option:");
       //show user the menu of the program
        scanf("%d",&option);
        switch(option){

        case 1:
        //flatten the original matrix
        flattenMatrix(side,side,matrix,flatmatrix);
        printf("flatten Matrix:\n");
        for(size_t i=0 ; i<side*side ; i++){
            printf("%3d",flatmatrix[i]);
        }
        break;

        case 2:
        
        for(int i=0 ;i<side;i++ ){
        for(int j=0;j<side;j++){
            if(i<side-1&&j<side-1){
               subflatmatrix[index]=matrix[i][j];
               index++;
                }
        }
    }

        bubbleSort(subflatmatrix,(side-1)*(side-1));
        maximum[0][0]=subflatmatrix[(side-1)*(side-1)-1];
        //the maxixmum of the left-top submatrix will equal to the last number of the bubllesort function

        index =0;
        //reset the index
        for(int i=0 ;i<side;i++ ){
        for(int j=0;j<side;j++){
            if(i<side-1&&j>0){
            subflatmatrix[index]=matrix[i][j];
            index++;
            }
        }
    }
         bubbleSort(subflatmatrix,(side-1)*(side-1));
        maximum[0][1]=subflatmatrix[(side-1)*(side-1)-1];
        //the maximum of the right-top will equal to the last number of the bubblesort function

        index =0;
        //reset the index
        for(int i=0 ;i<side;i++ ){
        for(int j=0;j<side;j++){
            if(i>0&&j<side-1){
            subflatmatrix[index]=matrix[i][j];
            index++;
            }
        }
    }
         bubbleSort(subflatmatrix,(side-1)*(side-1));
        maximum[1][0]=subflatmatrix[(side-1)*(side-1)-1];
        //the maximum of the left-bottom will equal to the last number of the bubblesort function

        index =0;
        //reset the undex
        for(int i=0 ;i<side;i++ ){
        for(int j=0;j<side;j++){
            if(i>0&&j>0){
             subflatmatrix[index]=matrix[i][j];
             index++;
            }
        }
    }
         bubbleSort(subflatmatrix,(side-1)*(side-1));
        maximum[1][1]=subflatmatrix[(side-1)*(side-1)-1];
        //the maximum of the right-bottom wull equal to the last number of the bubblesort function

        printffuntion(2,maximum);
        //show user the result


        
   


        break;

        case 3:
        stop=1;
        printf("Bye Bye!!\n Have a Wonderful Day!\n");
        //say good bye to you!!!!
        break;

        default:
        break;

    }}


}//end main