#include <stdio.h>
#include <stdlib.h>

void incrementLoop(int *current, int *i) {
    current--
    i++;
}

int inArray(int n, int length, int *array) {
    for (int i = 0; i < length; i++) {
        if (n == array[i]) {
            return 1;
        }
    }

    return 0;
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

    int currentCol, currentRow, seen[500];
    currentRow = rows;
    currentCol = cols;

    for (int i = 0; i < currentRow; i++) {
        for (int j = 0; j < currentCol; incrementLoop(currentCol, j)) {
            printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}