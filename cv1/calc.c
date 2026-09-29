#include <stdio.h>

int main() {
    int a, b, res;
    char c;
    printf("Zadej priklad:\n");
    scanf("%d", &a);
    scanf("%c", &c);
    scanf("%d", &b);
    // if ( != 1) {
    //     printf("Spatny vstup, zadej cislo.\n");
    //     return 1;
    // }

    if (c == '+') {
        res = a + b;
    } else if (c == '-') {
        res = a - b;
    } else {
        res = 0;
        printf("Chyba ve vstupu pro znamenko\n");
        return 1;
    }

    printf("Zadal jsi priklad: %d %c %d\n", a, c, b); 
    
    

    printf("Vysledek je %d\n", res);
    return 0;
    // // Vypocty
    // printf("%d + %d = %d\n", a, b, (a + b));
    // printf("%d - %d = %d\n", a, b, (a - b));
    // printf("%d * %d = %d\n", a, b, (a * b));
    // printf((a == 0 || b == 0) ? "Error: Delit nulou se neda\n" : "%d / %d = %d\n", a, b, (a == 0 || b == 0) ? 0 : (a / b));
    // printf((a == 0 || b == 0) ? "Error: Delit nulou se neda\n" : "%d mod %d = %d\n", a, b, (a == 0 || b == 0) ? 0 : (a % b));
    // return 0;
}