#include <stdio.h>

void Concatenar_Palavras(char string1[], int t1, char string2[], int t2, char string3[]) {
    int x, y;

    for (x = 0; x < t1; x++) {
        string3[x] = string1[x];
    }

    for (y = 0; y < t2; y++) {
        string3[t1 + y] = string2[y];
    }

    string3[t1 + t2] = '\0';
}

int main() {
    char palavra1[] = {'H', 'e', 'l', 'l', 'o', ' '};
    char palavra2[] = {'B', 'i', 'a'};
    char concatenar[10];

    Concatenar_Palavras(palavra1, 6, palavra2, 3, concatenar);

    printf("%s", concatenar);

    return 0;
}
