#include <stdio.h>

int main(){

int num;
printf("\n********DESCOBRIR SE O NUMERO E POSITIVO OU NEGATIVO ********\n\n");
printf("Escreva um numero inteiro: \t");
scanf("%d",&num);

if (num < 0 ){

printf("Seu numero eh negativo");

}else{

    printf("Seu numero eh positivo");
}

    return 0;
}