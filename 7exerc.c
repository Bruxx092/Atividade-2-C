#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int faltas;
    float media;

    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);
    printf("Digite a média: ");
    scanf("%f", &media);

    if (faltas > 5 || media < 4.0) {
        printf("\033[31mReprovado\033[0m\n");  
        printf("\033[32mAprovado\033[0m\n");  
    } else {
        printf("\033[33mRecuperação\033[0m\n");  
    }

    return 0;
}
