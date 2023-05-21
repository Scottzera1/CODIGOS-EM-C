#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");
printf("\t\t--- TRABALHO DE PROGRAMAÇÃO---\n\n");
printf("\t\t---UNIVERSIDADE ESTADUAL DE PONTA GROSSA uepg---\n\n");
printf("\t\t---PROFESSOR: ALCEU DE SOUZA BRITTO JUNIOR---\n\n");
printf("\t\t---AUTORIA: GUILHERME ANTÔNIO RA:22024223---\n\n");

int num,i, soma= 0;

do{
printf("Digite um número que não seja menor ou Zero:\n");
scanf("%i",&num);
fflush;

for (i = 1; i < num; i++){

if ( num % i == 0){

soma = soma + i;
  }
}
if(soma == num)
printf("\n %i Este número é perfeito\n",num);

else
printf("\n % i não é um número perfeito\n",num);
}while(num !=0);
return 0;
system("pause");
}
