#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    int finalPlaca;

    printf("Digite o número final da placa do veículo (0-9): ");
    scanf("%d", &finalPlaca);

    switch (finalPlaca) {
        case 1:
        case 2:
            printf("Dia do rodízio: Segunda-feira\n");
            break;
        case 3:
            printf("Dia do rodízio: Terça-feira\n");
            break;
        case 4:
        case 5:
            printf("Dia do rodízio: Quarta-feira\n");
            break;
        case 6:
        case 7:
            printf("Dia do rodízio: Quinta-feira\n");
            break;
        case 8:
        case 9:
        case 0:
            printf("Dia do rodízio: Sexta-feira\n");
            break;
        default:
            printf("Número inválido. Insira um número entre 0 e 9.\n");
            break;
    }

    return 0;
}
