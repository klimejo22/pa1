#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int prvni[100], druhy[100];
    int n1, n2;

    printf("Zadej velikost prvniho pole: ");
    if (scanf("%d", &n1) != 1) {
        printf("Spatny vstup\n");
        return 1;
    }

    printf("Zadej prvky prvniho pole:\n");
    
    for(int i = 0; i < n1; i++) {
        if (scanf("%d", &prvni[i])) {
            printf("Spatny vstup\n");
            return 1;
        }
    }

    printf("Zadej velikost druheho pole: ");
    if (scanf("%d", &n2) != 1) {
        printf("Spatny vstup\n");
        return 1;
    }

    printf("Zadej prvky druheho pole:\n");
    
    for(int i = 0; i < n2; i++) {
        if (scanf("%d", &druhy[i])) {
            printf("Spatny vstup\n");
            return 1;
        }
    }

    if (n1 != n2) {
        printf("Neni anagram\n");
        return 0;
    }

    qsort(prvni, n1, sizeof(int), comp);
    qsort(druhy, n2, sizeof(int), comp);

    for (int i = 0; i < n1; i++) {
        if (prvni[i] != druhy[i]) {
            printf("Neni anagram\n");
            return 0;
        }
    }
    printf("Je anagram\n");
    return 0;
}