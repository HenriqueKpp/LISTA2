#include <stdio.h>


int main(){

float n1, n2;
printf("\n********PROGRAMA QUE COLOCA EM ORDEM CRESCENTE OS VALORES ********\n\n");
printf("Escreva o primeiro valor: ");
scanf("%f",&n1);
printf("Escreva o segundo valor: ");
scanf("%f",&n2);

if(n1>n2){

printf("O menor numero eh %.1f seguido pelo %.2f",n2,n1);

}else{

printf("O menor numero eh %.1f seguido pelo %.2f",n1,n2);

}



    return 0;
}