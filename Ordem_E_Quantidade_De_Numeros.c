#include <stdio.h>

void Ordem_dos_numeros(int vetor[], int n);

int main() {
    int vetor[100];
    int n;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    printf("Digite os numeros: ");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    Ordem_dos_numeros(vetor, n);
    printf("Numeros ordenados: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}

void Ordem_dos_numeros(int vetor[], int n) {
    int troca;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vetor[i] > vetor[j]) {
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
}
