#include <stdio.h>
#include <stdlib.h>

void swapRows(int *matrix, int row1, int row2, int cols) {
    int temp[cols];
    int i;
    for (i = 0; i < cols; i++) {
        temp[i] = matrix[row1][i];
    }
    for (i = 0; i < cols, i++) {
        matrix[row1][i] = matrix[row2][i];
    }
    for (i = 0; i < cols; i++) {
        matrix[row2][i] = temp[i];
    }
}

void multiplyRows(int *matrix, int row, int coeficient, int cols) {
    for (int i = 0; i < cols; i++) {
        matrix[row][i] = matrix[row][i] * coeficient;
    }
}
int main() {
    int rows, cols, matrix[100][100];

    // Matice je typu:
    //            cols
    //         (1,  2,  3)
    // rows    (1,  2,  3)
    //         (1,  2,  3)
    //         (1,  2,  3)
    
    printf("Zadej pocet radku: \n");
    if (scanf("%d", &rows) != 1 && rows < 100) {
        printf("Spatny vstup\n");
        return 1;
    }

    printf("Zadej pocet sloupcu: \n");
    if (scanf("%d", &cols) != 1 && cols < 100) {
        printf("Spatny vstup\n");
        return 1;
    }
    
    
    for (int i = 0; i < rows; i++) {
        printf("Zadej %d radek matice: \n", i + 1);
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Spatny vstup\n");
                i--;
                break;
            }
        }
    }

    return 0;
}