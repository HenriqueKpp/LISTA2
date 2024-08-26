#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

float altura, mfinal, ffinal;
char sexo[2] = "M",kapa[2] = "M";
printf("\n********CALCULO DE PESO IDEAL ********\n\n");
printf("Digite o sexo da pessoa (M ou F) :");
scanf("%c", &sexo);
printf("Digite a altura do individuo: ");
scanf("%f",&altura);

if(strcmp(sexo,kapa) ==0 ){

mfinal = (72.7* altura) - 58 ;
printf("Seu peso ideal com base nos calculos para homens: %.2f kg",mfinal);
}else{

ffinal = (62.1 * altura) - 44.7;
printf("Seu peso ideal com base nos calculos para mulheres: %.2f kg",ffinal);

}

    return 0;
}