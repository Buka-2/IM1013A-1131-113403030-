#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void printfMatrix(size_t rows,size_t columns,int array[rows][columns] ){
    // the fuction to print every element of the Matrix

    for(size_t i=0 ; i<rows ; i++){
        for(size_t j=0 ; j<columns ; j++){
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }
    
}
void mutiply_and_PrintMatrix(size_t rows_A,size_t columns_A,int arrayA[rows_A][columns_A],size_t rows_B,size_t columns_B,int arrayB[rows_B][columns_B]){
    //the function to print the result of the MatrixA * MatrixB
    int result[rows_A][columns_B];
    for(size_t i=0 ; i<rows_A ; i++){
        for(size_t j=0 ; j<columns_B ; j++){

            //set all the element of the result Matrix to 0
            result[i][j]=0;
        }
    }
    for(size_t i=0 ; i<rows_A ; i++){
        for(size_t j=0 ; j<columns_B ; j++){
            for(size_t k=0 ; k<rows_B ; k++){
                //compute the element of the result function
                result[i][j]+=arrayA[i][k]*arrayB[k][j];
            }
        } 
    }

    printfMatrix(rows_A,columns_B,result);

}
void transpose_and_PrintMatrix(size_t rows , size_t columns , int array[rows][columns]){
    //the function to transpose the function
    int transposeMatrix[columns][rows];
    for(size_t i=0 ; i<columns ; i++){
        for(size_t j=0 ; j<rows ; j++){
            transposeMatrix[i][j]=array[j][i];
        }
    }
    printfMatrix(columns , rows ,transposeMatrix);
}

void fillMatrix(size_t rows,size_t columns,int array[rows][columns]){
    //to randonmize the element of the Matrix A and B
    srand(time(NULL));
    for(size_t i=0 ; i<rows ; i++ ){
        for(size_t j=0 ; j<columns ; j++){
            array[i][j]=rand()%9+1;
        }
    }
}




int main(void){
    
    printf("please enter the dimension of Matrix A (rows and columns):");
    //prompt users to enter the dimension of the Matrix A 
    size_t rowsA;
    size_t columnsA;
    scanf("%lu""%lu",&rowsA,&columnsA);
    if(rowsA<1||columnsA<1){
        //if users enter invalid number prompt users to enter again
        printf("invalid number please enter again!!");
        scanf("%lu""%lu",&rowsA,&columnsA);
    }
    int MatrixA[rowsA][columnsA];
    printf("Matrix A :\n");
    fillMatrix(rowsA , columnsA , MatrixA);
    printfMatrix(rowsA , columnsA , MatrixA);
    //end series set of MatrixA
    printf("please enter the dimension of Matrix B (rows and columns):");
    //prompt users to enter the dimension of the Matrix B
    size_t rowsB;
    size_t columnsB;
    scanf("%lu""%lu",&rowsB,&columnsB);
    if(rowsB!=columnsA||columnsB<1){
        //if users enter invalid number prompt users to enter agian 
        printf("invalid number please enter again!!");
        scanf("%lu""%lu",&rowsB,&columnsB);
    }
    int MatrixB[rowsA][columnsB];
    printf("Matrix B :\n");
    fillMatrix(rowsB , columnsB , MatrixB);
    printfMatrix(rowsB,columnsB,MatrixB);

    int stop=0;
    while(stop==0){
        printf("select and operation:\n1.Transpose Matrix A\n2.Transpose Matrix B\n3.Multiply Martices\n4.Exit");
        //if user enter 4 the program end, otherwise , the program continue 
        int option;
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("transposed Matrix A :");
            transpose_and_PrintMatrix(rowsA,columnsA,MatrixA);
            break;

            case 2:
            printf("transposed Matrix B:");
            transpose_and_PrintMatrix(rowsB,columnsB,MatrixB);
            break;

            case 3:
            printf("the result of the MatrixA * MatrixB:\n");
            mutiply_and_PrintMatrix(rowsA,columnsA,MatrixA,rowsB,columnsB,MatrixB);
            break;

            case 4:
            printf("Goodbye!!!");
            stop=1;
            break;

            default:
            printf("\n");
            break;


            

            
            
            

            
            


        }
    }

}//end main