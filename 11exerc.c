#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    float x, y;
    char o;

    printf("Expressao? ");
    scanf("%f %c %f", &x, &o, &y);

    switch (o) {
        case '*':
        case 'x':
            printf("Valor = %.2f\n", x * y);
            break;
        case '/':
        case ':':
            if (y == 0) {
                printf("Erro: Divisao por zero.\n");
            } else {
                printf("Valor = %.2f\n", x / y);
            }
            break;
        default:
            printf("Operador invalido: %c\n", o);
    }

    return 0;
}
