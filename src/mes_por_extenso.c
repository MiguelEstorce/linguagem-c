#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int mes;
    printf("digite o numero do mes e eu lhe direi o mes por extenso: \n");
    scanf("%d",&mes);

    switch (mes)
    {
    case 1:
        printf("este é o mes de janeiro");
        break;
    
    case 2:
        printf("este é o mes de fevereiro");
        break;

    case 3:
        printf("este é o mes de Março");
        break;
    
    case 4:
        printf("este é o mes de abril");
        break;

    case 5:
        printf("este é o mes de maio");
        break;

    case 6:
        printf("este é o mes de junho");
        break;

    case 7:
        printf("este é o mes de julho");
        break;

    case 8:
        printf("este é o mes de agosto");
        break;

    case 9:
        printf("este é o mes de setembro");
        break;

    case 10:
        printf("este é o mes de outubro");
        break;

    case 11:
        printf("este é o mes de novembro");
        break;

    case 12:
        printf("este é o mes de dezembro");
        break;

    default:
    printf("mes invalido");
        break;
    }
    printf("\n");
    return 0;
}