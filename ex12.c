#include <stdio.h>
int main(){

float saldo, debito , credito, atual;
printf("\n********CALCULO DE SALDO DA CONTA ********\n\n");
printf("Escreva seu saldo da conta: ");
scanf("%f",&saldo);
printf("Escreva o valor do debito da conta: ");
scanf("%f",&debito);
printf("Escreva o valor de credito da conta: ");
scanf("%f",&credito);

atual = (saldo + credito) - debito ;

if(atual > 0 ){
printf("\nSeu saldo esta positivo!");
printf("\nSaldo atual: %f R$",atual);


}else{

printf("\nSeu saldo esta negativo");
printf("\nSaldo atual: %.2f R$",atual);
}


    return 0;
}