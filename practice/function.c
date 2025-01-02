// the funtion of letting user input the value of martix
void inputMatrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Please enter the element of matrix[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// the funtion of letting martix 2D to 1D
void flattenMatrix(int rows, int columns, int matrix[rows][columns], int flat[]) {
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            flat[index] = matrix[i][j];
            index++;
        }
    }
}

// the funtion of bubble sort
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

// the funtion of refilling martix from 1D to 2D
void refillMatrix(int rows, int columns, int matrix[rows][columns], int flat[]) {
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = flat[index];
            index++;
        }
    }
}

// the funtion of printing martix
void printMatrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%4d", matrix[i][j]);
        }
        puts("");
    }
}