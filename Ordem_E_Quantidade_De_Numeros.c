#include <stdio.h>

void Ordem_dos_numeros(int vetor[], int n1);

int main() {
    int vetor[100];
    int n1;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n1);
    printf("Digite os numeros: ");
    
    for (int i = 0; i < n1; i++) {
        scanf("%d", &vetor[i]);
    }
    Ordem_dos_numeros(vetor, n1);
    printf("Numeros ordenados: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}

void Ordem_dos_numeros(int vetor[], int n1) {
    int troca;

    for (int i = 0; i < n1; i++) {
        for (int j = i + 1; j < n1; j++) {
            if (vetor[i] > vetor[j]) {
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
}
