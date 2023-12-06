#include <stdio.h>

int main() {
    char numero[100];

    printf("Digite um numero: ");
    scanf("%s", numero);

    int tamanho = 0;

    while (numero[tamanho] != '\0') {
        tamanho++;
    }

    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {
        char comeco = numero[inicio];
        numero[inicio] = numero[fim];
        numero[fim] = comeco;

        inicio++;
        fim--;
    }

    printf("Numero invertido: %s\n", numero);

    return 0;
}
