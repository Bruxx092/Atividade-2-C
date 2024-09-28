#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "");
    int finalPlaca;

    printf("Digite o número final da placa do veículo (0-9): ");
    scanf("%d", &finalPlaca);

    if (finalPlaca == 1 || finalPlaca == 2) {
        printf("Dia do rodízio: Segunda-feira\n");
    } else if (finalPlaca == 3) {
        printf("Dia do rodízio: Terça-feira\n");
    } else if (finalPlaca == 4 || finalPlaca == 5) {
        printf("Dia do rodízio: Quarta-feira\n");
    } else if (finalPlaca == 6 || finalPlaca == 7) {
        printf("Dia do rodízio: Quinta-feira\n");
    } else if (finalPlaca == 8 || finalPlaca == 9 || finalPlaca == 0) {
        printf("Dia do rodízio: Sexta-feira\n");
    } else {
        printf("Número inválido. Insira um número entre 0 e 9.\n");
    }

    return 0;
}
