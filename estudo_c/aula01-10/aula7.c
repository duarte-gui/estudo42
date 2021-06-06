#include <stdio.h>

int main(void)
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base:");
    scanf("%i", &base);//& manda input teclado pra variável

    printf("Digite o valor da altura:");
    scanf("%i", &altura);

    area = base * altura;

    printf("O valor da base do retângulo é = %i\n", area);

    return 0;
}
