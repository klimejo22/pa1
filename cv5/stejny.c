#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int inArray(int n, int length, int *array) {
    for (int i = 0; i < length; i++) {
        if (n == array[i]) {
            return 1;
        }
    }

    return 0;
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
        if (scanf("%d", &prvni[i]) != 1) {
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
        if (scanf("%d", &druhy[i]) != 1) {
            printf("Spatny vstup\n");
            return 1;
        }
    }

    qsort(prvni, n1, sizeof(int), comp);
    qsort(druhy, n2, sizeof(int), comp);

    int seen1[100], seen2[100];
    int j = 0;
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (inArray(prvni[i], sizeof(seen1) / sizeof(seen1[0]), seen1)) {
            seen1[j] = prvni[i];
            j++;
        }
    }
    for (int i = 0; i < n2; i++) {
        if (inArray(druhy[i], sizeof(seen2) / sizeof(seen2[0]), seen2)) {
            seen2[k] = druhy[i];
            k++;
        }
    }

    if (j == k) {
        printf("Jsou stejny\n");
        return 0;
    }

    printf("Nejsou stejny\n");
    return 0;
}