#include <stdio.h>
int main(){
    //declarar as variaveis que vão receber os numeors digitado e os usuarios
    int numero1;
    int numero2;
    int resultado;
    // vamos pedir ao usuario entrar com o primeiro valor
    printf("digite um numero: \n");
    //capturando o numero digitado pelo usuario, com o comando SCANF
    scanf("%d",&numero1);
    printf("digite outro numero inteiro e tecle o enter:\n");
    scanf("%d",&numero2);
    // vamos reliza a soma entre os numeros 1 e 2
    resultado = numero1 + numero2;
    //apresentar resultado em tela
    printf("a soma do numero %d com o numero %d é %d: \n ",numero1, numero2, resultado);
    
    return 0;
}