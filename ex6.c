#include <stdio.h>


int main(){

float n1, n2;
printf("\n********PROGRAMA QUE ESCREVE O MAIOR VALOR ENTRE 2 VALORES ********\n\n");
printf("Escreva o primeiro valor: ");
scanf("%f",&n1);
printf("Escreva o segundo valor: ");
scanf("%f",&n2);

if(n1>n2){

printf("O maior nmumero eh: %.2f",n1);

}else{

printf("O maior nmumero eh: %.2f",n2);

}



    return 0;
}