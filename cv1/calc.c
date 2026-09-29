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

    // Vypocty
    printf("%d + %d = %d\n", a, b, (a + b));
    printf("%d - %d = %d\n", a, b, (a - b));
    printf("%d * %d = %d\n", a, b, (a * b));
    printf((a == 0 || b == 0) ? "Error: Delit nulou se neda\n" : "%d / %d = %d\n", a, b, (a == 0 || b == 0) ? 0 : (a / b));
    printf((a == 0 || b == 0) ? "Error: Delit nulou se neda\n" : "%d mod %d = %d\n", a, b, (a == 0 || b == 0) ? 0 : (a % b));
    return 0;
}