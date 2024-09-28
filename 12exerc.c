#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    int dia, mes, ano;
    int soma1, soma2, resto;

    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    soma1 = dia * 100 + mes + ano; 
    printf("%d + %d = %d\n", dia * 100 + mes, ano, soma1);

    soma2 = (soma1 / 100) + (soma1 % 100);
    printf("%d + %d = %d\n", soma1 / 100, soma1 % 100, soma2);

    resto = soma2 % 5; 
    printf("%d / 5 = %d com uma sobra de %d\n", soma2, soma2 / 5, resto);

    printf("Perfil: ");
    switch (resto) {
        case 0: printf("Tímida\n"); break;
        case 1: printf("Sonhador\n"); break;
        case 2: printf("Paquerador\n"); break;
        case 3: printf("Atraente\n"); break;
        case 4: printf("Irresistível\n"); break;
        default: printf("Perfil desconhecido.\n");
    }

    return 0;
}
