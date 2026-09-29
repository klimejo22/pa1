#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Zadej cisla:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    // if ( != 1) {
    //     printf("Spatny vstup, zadej cislo.\n");
    //     return 1;
    // }
    printf("Zadal jsi cisla %d a %d\n", a, b);

    // Vypocty
    printf("%d + %d = %d\n", a, b, (a + b));
    printf("%d - %d = %d\n", a, b, (a - b));
    printf("%d * %d = %d\n", a, b, (a * b));
    printf("%d / %d = %d\n", a, b, (a / b));
    printf("%d mod %d = %d\n", a, b, (a % b));
    return 0;
}