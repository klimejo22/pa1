#include <stdio.h>
#include <stdlib.h>

int main() {
    // char returnValue[40];
    int i, num;

    // char units[9][10] = {
    //     "jedna",
    //     "dva",
    //     "tri",
    //     "ctyri",
    //     "pet",
    //     "sest",
    //     "sedm",
    //     "osm",
    //     "devet"
    // }
    // char decimals[9][20] = {
    //     "jedenact",
    //     "dvanact",
    //     "trinact",
    //     "ctrnact",
    //     "patnact",
    //     "sestnact",
    //     "sedmnact",
    //     "osmnact",
    //     "devatencat"
    // }

    if ((i = scanf("%d", &num)) != 1) {
        printf("Spatny vstup\n");
        return 1;
    }

    int digits[4];
    int current;
    int index = 3;
    while (num != 0) {
        current = num % 10;
        digits[index] = current;
        index--;
        num = num / 10;
    }

    for (i = 0; i < 4; i++) {
        printf("%d\n", digits[i]);
    }
    return 0;
}