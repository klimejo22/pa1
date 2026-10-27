#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n[2], temp;

    printf("Zadej velikost prvniho pole: ");
    if (scanf("%d", &n[0]) != 1) {
        printf("Spatny vstup\n");
        return 1;
    }

    printf("Zadej prvky prvniho pole:\n");
    
    int prvni[n];
    for(i = 0; i < n; i++) {
        if (scanf("%d", &druhy[i])) {
            printf("Spatny vstup\n");
            return 1;
        }
    }

    printf("Zadej velikost druheho pole: ");
    if (scanf("%d", &n[1]) != 1) {
        printf("Spatny vstup\n");
        return 1;
    }

    printf("Zadej prvky druheho pole:\n");
    
    int druhy[n];
    for(i = 0; i < n; i++) {
        if (scanf("%d", &druhy[i])) {
            printf("Spatny vstup\n");
            return 1;
        }
    }

    if (n[1] != n[0]) {
        printf("Neni anagram\n");
        return 0;
    }

    qsort(prvni, n[0], sizeof(int), comp);
    qsort(druhy, n[1], sizeof(int), comp);

    for (int i = 0, i < n[1], i++) {
        if (prvni[i] != druhy[i]) {
            printf("Neni anagram\n");
            return 0;
        }
    }
    printf("Je anagram\n");
    return 0;
}