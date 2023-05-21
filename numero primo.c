#include<stdlib.h>
#include <stdio.h>
#include<locale.h>
 int inicio(){
printf("\t\t--- TRABALHO DE PROGRAMAÇÃO---\n\n");
printf("\t\t---UNIVERSIDADE ESTADUAL DE PONTA GROSSA uepg---\n\n");
printf("\t\t---PROFESSOR: ALCEU DE SOUZA BRITTO JUNIOR---\n\n");
printf("\t\t---AUTORIA: GUILHERME ANTÔNIO RA:22024223---\n\n");

int verificaprimo (int numero) {

int i = 1, conta = 0;

for(i; i<= numero; i++){

if (numero % i == 0){
   conta++;
   }
 }
if (conta > 2 ||numero < 2){

   return 0;
}   else{

    return 1;

   }
}


int main (){
setlocale(LC_ALL,"Portuguese");

int quantidade = 0;
int  soma = 0;
int i;
int primo = 0;

int professor;

printf("Digite a quantidade de números a serem obtidos");
scanf("%i",&quantidade);

int numeros[quantidade];

for(i = 0; i < quantidade; i++){

printf("Qual é o %i número\n",i+ 1);
scanf("%i",&numeros[i]);

    if(verificaprimo(numeros[i])== 1){
        soma= soma + numeros[i];
        primo++;
    }
  }
  printf("\n A Soma dos Números primos é %i\n",soma);

  printf("\n Deseja saber como chegamos nesse cálculo?(1 para sim)\n");
  scanf("%i",&professor);

  if(professor == 1){

    printf("\n Encontramos %i Números primos dos %i Digitados\n",primo,quantidade);
  }
    system("pause");
    return 0;
}
}

