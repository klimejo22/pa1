#include <stdio.h>
#include <stdlib.h>

int factIter(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int factRec(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factRec(n-1);
}

int sumArray(int *arr, size_t arr_len) {
    if (arr_len == 0) {
        return 0;
    }
    return arr[0] + sumArray(arr + 1, arr_len - 1);
}

void printArray(int *arr, size_t arr_len) {
    if (arr_len == 0) {
        printf("\n");
        return;
    }
    printf("%d ", arr[0]);
    printArray(arr + 1, arr_len - 1);
}

void printArrayReverse(int *arr, size_t arr_len) {
    printArray(arr + 1, arr_len - 1);
    printf("%d ", arr[0]);
    if (arr_len == 0) {
        return;
    }
}

int main() {

    return 0;
}