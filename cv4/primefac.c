#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorize(int n, int* arr) {
    int index = 0;
    while (n % 2 == 0) {
        arr[index++] = 2;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            arr[index++] = i;
            n /= i;
        }
    }
    if (n > 2) {
        arr[index++] = n;
    }
    return index;
}
int main() {
    int primes[32];
    int n;
    printf("Zadej cislo: \n");
    if (scanf("%d", &n) != 1) {
        printf("Spatny vstup");
        return 1;
    }
    int loopLength = factorize(n, primes);
    factorize(n, primes);
    for (int i = 0; i < loopLength; i++) {
        printf("%d ", primes[i]);
        if (i != loopLength - 1) {
            printf("* ");
        }
    }
    printf("\n");
    int j;
    for (int i = 0; i < loopLength; i += j) {
        j = 1;
        printf("%d^", primes[i]);
        while (i + j < loopLength && primes[i + j] == primes[i]) {
            j++;
        }
        printf("%d ", j);
        
        if (i != loopLength - 1) {
            printf("* ");
        }
    }
    printf("\n");
    return 0;
}