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
        printf("*");
        return 0;
    }

    int whitspaceCount;
    for (int row = 1; row <= height; row++) {
        whitspaceCount = height - row; 
        for (int col = whitspaceCount; col <= height; col++) {
            printf("0");
        }
        for (int col = (whitspaceCount * 2) - 1; col <= height; col++) {
            printf("*");
        }
        for (int col = whitspaceCount; col <= height; col++) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}