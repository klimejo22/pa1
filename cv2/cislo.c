#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main() {
    char returnValue[40] = "";
    int i, num;

    char units[9][10] = {
        "jedna",
        "dva",
        "tri",
        "ctyri",
        "pet",
        "sest",
        "sedm",
        "osm",
        "devet"
    };

    char decimals[10][20] = {
        "deset"
        "jedenact",
        "dvanact",
        "trinact",
        "ctrnact",
        "patnact",
        "sestnact",
        "sedmnact",
        "osmnact",
        "devatencat"
    };

    printf("Zadej cislo:\n");
    if ((i = scanf("%d", &num)) != 1) {
        printf("Spatny vstup\n");
        return 1;
    }

    if (num > 9999) {
        printf("Spatny vstup, cislo je moc velke\n");
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
        if (i == 0 && digits[i] > 0) {
            // Tisice
            if (digits[i] == 1) {
                strcat(returnValue, "tisic ");
            } else {
                strcat(returnValue, strcat(units[digits[i] - 1], " tisic "));
            }
            
        } else if (i == 1 && digits[i] > 0) {
            // Stovky
            if (digits[i] == 1) {
                strcat(returnValue, " sto ");
            } else if (digits[i] == 2) {
                strcat(returnValue, "dve ste ");
            } else if (digits[i] == 3 || digits[i] == 4) {
                strcat(returnValue, strcat(units[digits[i] - 1], " sta "));
            } else {
                strcat(returnValue, strcat(units[digits[i] - 1], " set "));
            }
        } else if (i == 2 && digits[i] > 0) {
            // Desitky
            if (digits[i] == 1) {
                strcat(returnValue, decimals[digits[i + 1] - 1]);
                break;
            }

            strcat(returnValue, strcat(units[digits[i] - 1], "cet "));
        } else if (digits[i] > 0) {
            // Jednotky
            strcat(returnValue, units[digits[i] - 1]);
        }
    }

    printf(returnValue);
    printf("\n");
    return 0;
}