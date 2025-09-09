#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("digite um numero \n");
    scanf("%d", &num);
    if( num > 10 ){
        printf("o numero que voce digitou é maior do que 10 \n",num);
    }
    else{
        printf("o numero que voce digitou é menor do que 10 \n",num);
    }
    return 0;
}