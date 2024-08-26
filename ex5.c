#include <stdio.h>

int main(){

int atual, idade;
printf("\n********DESCUBRA SE PODERA VOTAR ESSE ANO********\n\n");
printf("Escreva o ano atual: \t");
scanf("%d",&atual);
printf("Escreva o ano em que voce nasceu: \t");
scanf("%d",&idade);

atual = atual - idade;

if (atual >= 16){

printf("Voce podera votar esse ano!");

}else{

    printf("Voce nao podera votar esse ano!");
}


    return 0;
}