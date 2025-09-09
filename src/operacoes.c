//incluir a biblioteca padrão de entrada e saida de dados
#include <stdio.h>
int main(){
    int numero1, numero2;
    int soma, subtrair, multiplicar, dividir, resto;
    printf("digite o primeiro numero inteiro e tecle enter:\n");
    scanf("%d", &numero1);

    printf("digite o segundo numero inteiro e tecle enter:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtrair = numero1 - numero2;
    multiplicar = numero1 * numero2;
    dividir = numero1 / numero2;
    resto = numero1 % numero2;
    printf("o resultado da soma é %d\n", soma);
    printf("o resultado da subtração é %d\n",subtrair);
    printf("o resultado da multiplicação é %d\n",multiplicar);
    printf("o resultado da divisão é %d\n",dividir);
    printf("o resultado do resto é %d\n",resto);
}