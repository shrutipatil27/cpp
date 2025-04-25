#include <stdio.h>


int findNthSmallest(int matrix[10][10], int rows, int cols, int n) {
    int count = 0;
    int min;

    
    while (count < n) {
        min = 2147483647; 
        
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }

        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == min) {
                    matrix[i][j] = 2147483647;  
                    break;
                }
            }
        }
        count++;
    }

    return min;
}


int findNthLargest(int matrix[10][10], int rows, int cols, int n) {
    int count = 0;
    int max;

    
    while (count < n) {
        max = -2147483648; 
        
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }

       
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == max) {
                    matrix[i][j] = -2147483648;  
                    break;
                }
            }
        }
        count++;
    }

    return max;
}

int main() {
    int matrix[10][10];  
    int rows, cols;
    int n;
    char choice;
    
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    printf("Do you want to find the nth smallest (enter 'S') or nth largest (enter 'L')? ");
    scanf(" %c", &choice);  

    if (choice == 'S' || choice == 's') {
       
        int nthSmallest = findNthSmallest(matrix, rows, cols, n);
        printf("The %d%s smallest element is: %d\n", n, (n == 1 ? "st" : n == 2 ? "nd" : n == 3 ? "rd" : "th"), nthSmallest);
    } else if (choice == 'L' || choice == 'l') {
        
        int nthLargest = findNthLargest(matrix, rows, cols, n);
        printf("The %d%s largest element is: %d\n", n, (n == 1 ? "st" : n == 2 ? "nd" : n == 3 ? "rd" : "th"), nthLargest);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

