#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);
    if (imc < 18.5) {
        printf("Situação: Magra\n");
    } else if (imc >= 18.5 && imc < 30) {
        printf("Situação: Normal\n");
    } else {
        printf("Situação: Obesa\n");
    }

    return 0;
}
