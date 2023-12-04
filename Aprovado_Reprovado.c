#include <stdio.h>

int menu() {
    printf("Deseja colocar outras notas?\n1- Sim\n2- Nao\n");
    int op;
    scanf("%d", &op);
    return op;
}

int main() {
    float n1, n2, n3, n4, media;
    int op;

    while (1) {
        printf("Digite as 4 notas: ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

        media = (n1 + n2 + n3 + n4) / 4;

        if (media >= 7) {
            printf("Média = %.2f - Aluno aprovado\n", media);
        } else {
            printf("Média = %.2f - Aluno reprovado\n", media);
        }

        op = menu();

        if (op == 2) {
            break; // Sai do loop se a opção for 2
        }
    }

    return 0;
}
