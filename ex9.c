#include<stdio.h>

int main (){

int horas;
float total, comum,hextra;
printf("\n********SALARIO FINAL COM/SEM HORAS EXTRAS ********\n\n");
printf("Quantas horas foram trabalhadas no mes?");
scanf("%d",&horas);
printf("Qual o valor da hora comum? ");
scanf("%f",&comum);

if(horas>40){

hextra = horas - 40;
total = hextra * (comum * 1.5);
horas = horas - hextra;
}

total = total + (horas * comum);

printf("Seu salario final sera: %.2f", total);
    return 0;
}