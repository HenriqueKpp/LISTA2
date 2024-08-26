#include <stdio.h>

int main(){

int atual, min, max ;
float media;
printf("\n********CALCULO PARA COMPRAR MAIS ESTOQUE/NAO COMPRAR ********\n\n");

printf("Escreva a quatidade de estoque atual: ");
scanf("%d",&atual);
printf("Escreva a quantidade minima de estoque: ");
scanf("%d",&min);
printf("Escreva a quantidade maxima de estoque: ");
scanf("%d",&max);

media = (max + min) / 2;
if(media <= atual ){

printf("Nao efetuar compra.");


}else{

printf("Efetuar compra");

}

printf("\nMedia: %.1f",media);
    return 0;
}