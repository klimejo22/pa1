#include <stdio.h>
#include <stdlib.h>

int main() {
    int input, height;
    printf("Zadej velikost trojuhelniku\n");
    if ((input = scanf("%d", &height)) != 1) {
        printf("Spatny vstup\n");
        return 1;
    }

    if (height <= 0) {
        printf("Cislo je moc male\n");
        return 1;
    }

    if (height == 1) {
        printf("*\n");
        return 0;
    }

    int whitspaceCount;
    for (int row = 1; row <= height; row++) {
        whitspaceCount = height - row; 
        for (int col = 1; col <= whitspaceCount; col++) {
            printf(" ");
        }
        for (int col = 1; col <= (row * 2) - 1; col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}