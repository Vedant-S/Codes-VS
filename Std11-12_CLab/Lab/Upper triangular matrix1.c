/*
* C Program to print upper triangular matrix of a square matrix
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int rows, cols, size, rowCounter, colCounter;
    int inputMatrix[50][50];
    printf("Enter size square matrix\n");
    scanf("%d", &size);
    rows = cols = size;
    
    printf("Enter Matrix of size %dX%d\n", rows, cols);
    /*  Input matrix*/
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }
    /* 
      Printing upper triangular matrix 
      L[i,j] = 0, If i > j and L[i,j] = l[i,j], If i <= j
     */
    printf("Upper triangular Matrix\n");
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            if(rowCounter > colCounter){
                /* Lower triangle element*/
                printf("%d ", 0);
            } else {
                /* Upper triagle element*/
                printf("%d ", inputMatrix[rowCounter][colCounter]);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
