#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a, b, c;
    printf("Zadej strany trojuhelniku a, b, c oddelene mezerou\n");
    if ((i = scanf("%d %d %d", &a, &b, &c)) < 3 || a < 1 || b < 1 || c < 1) {
        printf("Spatny vstup\n");
        return 1;
    }


    if (a * a + b * b == c * c) {
        printf("Trojuhelnik je pravouhly\n");
        return 0;
    }

    printf("Trojuhelnik neni pravouhly \n");
    return 0;
}