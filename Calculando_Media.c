#include <stdio.h>


int main(){
    float n1, n2, n3, n4, media;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4)/4;

    if(media >= 7){
        printf(" Média = %.2f - Aluno Aprovado", media);
    }

    else if (media < 7){
        printf(" Media = %.2f - Aluno Reprovado", media);
    }

    return 0;
}
