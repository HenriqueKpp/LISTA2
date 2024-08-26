#include <stdio.h>


int main(){

float num, preco;
printf("\n********CUSTO DA COMPRA DE MACAS ********\n\n");
printf("Quantas macas voce deseja comprar? \t");
scanf("%f", &num);

if(num < 12){

preco = num * 1.30;
printf("O preco das macas sera %.2f reais.", preco);
}else
if(num <0){

printf("Valor invalido!");

}else{
preco = num * 1.0;
printf("O preco das macas sera %.2f reais.", preco);

}

    return 0 ;
}