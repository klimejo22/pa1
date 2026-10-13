#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getMiddle(int height) {
    if (height == 0) {
        return 0;
    }
    int half = ceil(height / 2);
    if (height % 2 == 1) {
        half++;
    }
    return half;
}
int main() {
    int input, height;
    printf("Zadej velikost obalky (alespon 5):\n");
    if ((input = scanf("%d", &height)) != 1 && input < 5) {
        printf("Spatny vstup\n");
        return 1;
    }

    // Zjisteni prostredku
    int middle = getMiddle(height);
    int midrow = 1;
    for (int row = 1; row <= height; row++) {
        // Prvni a posledni radka
        if (row == 1 || row == height) {
            for (int col = 1; col <= height; col++) {
                printf("*");
            }
        }
        // Prostredni radky
        else if (row <= middle) {
            for (int col = 1; col <= height; col++) {
                if (col == 1 || col == height || col == midrow + 1 || col == height - midrow) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            midrow++;
        }
        // Zbytek
        else {
            for (int col = 1; col <= height; col++) {
                if (col == 1 || col == height) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}