#include <stdio.h>

int main() {
    int a;
    printf("Zadej priklad:\n");
    scanf("%d", &a);
    // if ( != 1) {
    //     printf("Spatny vstup, zadej cislo.\n");
    //     return 1;
    // }
    printf("Zadal jsi cislo %x\n", a);
    return 0;
}