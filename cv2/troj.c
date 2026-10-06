#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a, b, c;
    printf("Zadej strany trojuhelniku a, b, c oddelene mezerou\n");
    if ((i = scanf("%d %d %d", &a, &b, &c)) < 3) {
        printf("Spatny vstup\n");
        return 1;
    }

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}