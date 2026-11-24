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

int main() {

    return 0;
}