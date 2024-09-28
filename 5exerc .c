#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "");
 float n1, n2;
  printf("Números?");
    scanf("%f %f", &n1, &n2);
  if(n1>n2) puts("1° Número  maior que 2° Número ");
  else puts ("2° Número  maior que 1° Número ");
    if(n1==n2) puts("1° Número  igual a 2° Número ");
  return 0;
}