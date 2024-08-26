#include<stdio.h>


int main(){
int inicio, final ,duracao;
printf("\n********CALCULO DO TEMPO DE JOGO ********\n\n");
printf("Em que horas a partida de xadrez iniciou?");
scanf("%d",&inicio);
printf("Escreva que horas a partida terminou: ");
scanf("%d",&final);

if(inicio<=final){

duracao = final - inicio;
    printf("A partida durou %d horas.",duracao);

}else{

    duracao = (final + 24) - inicio;
printf("A partida durou %d horas.",duracao);
}


    return 0;
}