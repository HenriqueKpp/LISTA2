#include <stdio.h>

int main(){

int num;
printf("\n********DESCOBRIR SE NUMERO E MAIOR OU MENOR QUE 10********\n\n");
printf("Esreva um numero inteiro: \t");
scanf("%d", &num);

if(num > 10){

printf("\nSeu numero e maior que 10.");

}else if(num <10){
printf("Seu numero e menor que 10.");

}else{
printf("Seu numero eh igual a 10.");

}



    return 0;
}