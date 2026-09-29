#include <stdio.h>

int main() {
    int height;
    printf("Zadej delku strany kolecka: ");
    if(scanf("%d", &height) != 1) {
        printf("Špatný vstup, zadej číslo.\n");
        return 1;
    }
    
    for (int row = 1; row <= height; row++) {
        for (int star = 1; star <= (row + (2 * height)); star++) {
            if ((row == 1 || row == height) && (star == 1 || star == (row + (2 * height)))) {
                printf(' ');
            } else {
                printf("*");
            }
            
        }
        printf("\n");
    }

    return 0;
}