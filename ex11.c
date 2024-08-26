#include<stdio.h>

int main(){

float fixo, vendas, final, extra;
printf("\n********CALCULO DE SALARIO FINAL ********\n\n");
printf("Escreva seu salario fixo: ");
scanf("%f",&fixo);
printf("Escreva o valor das vendas feitas: ");
scanf("%f",&vendas);

if (vendas >= 1500.0){

extra = vendas - 1500.0;
final = extra * 0.05;
vendas = vendas - extra;
}
final = final + (vendas * 0.03);
final = final + fixo;
printf("Seu valor final: %.2f R$.", final);
    return 0;
}