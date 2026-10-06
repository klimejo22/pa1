#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    char dayNames[7][10] = {
        "Pondeli",
        "Utery",
        "Streda",
        "Ctvrtek",
        "Patek",
        "Sobota",
        "Nedele"
    };

    printf("Zadej cislo dne v tydnu:\n");
    if(scanf("%d", &choice) != 1) {
        printf("Spatny vstup, zadej cislo'\n");
        return 1;
    }

    if (choice > 7 || choice < 0)
    {
        printf("Spatny vstup, cislo musi byt od 1-7\n");
        return 1;
    }
    
    printf(dayNames[choice - 1]);
    printf("\n");
    return 0;
    
}