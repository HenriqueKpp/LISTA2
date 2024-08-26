#include <stdio.h>

int main(){

float n1, n2,media;
printf("\n********DESCUBRA SE ESTA APROVADO OU NAO ********\n\n");
printf("Escreva sua nota referente a primeira avaliacao: \t");
scanf("%f",&n1);
printf("\nEscreva o valor da nota referente a segunda avaliacao: \t");
scanf("%f",&n2);

media = (n2 + n1) /2;

if(media>=7){

printf("\nVoce esta aprovado!");

}else{

printf("\nVoce esta reprovado!");

}
printf("\nSua media: %.2f", media);
    return 0;
}