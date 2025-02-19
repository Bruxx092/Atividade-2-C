#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");
    float a, b, c;
    float delta, raiz1, raiz2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("O coeficiente 'a' n�o pode ser zero em uma equa��o do 2� grau.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("N�o existem ra�zes reais.\n");
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("A raiz �nica �: %.2f\n", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As ra�zes s�o: %.2f e %.2f\n", raiz1, raiz2);
    }

    return 0;
}
