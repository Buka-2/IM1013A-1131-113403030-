#include<stdio.h>
#define number 5

int main(void){
    int array[number] ; 

    for(size_t i=0 ; i<number ; i++){
        printf("interger %lu:",i+1);
        scanf("%d",&array[i]);
       



    } 
     printf("\n");
    puts("each interger entered");
    int sum=0;
    for(size_t j=0 ; j<number ; j++){
        
        printf("%d ",array[j]);
        sum+=array[j];
        
    }
    printf("\nsum of the interger entered equal to %d\n",sum);
    

    


}//end main