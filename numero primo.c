#include<stdlib.h>
#include <stdio.h>
#include<locale.h>
 int inicio(){
printf("\t\t--- TRABALHO DE PROGRAMA��O---\n\n");
printf("\t\t---UNIVERSIDADE ESTADUAL DE PONTA GROSSA uepg---\n\n");
printf("\t\t---PROFESSOR: ALCEU DE SOUZA BRITTO JUNIOR---\n\n");
printf("\t\t---AUTORIA: GUILHERME ANT�NIO RA:22024223---\n\n");

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

printf("Digite a quantidade de n�meros a serem obtidos");
scanf("%i",&quantidade);

int numeros[quantidade];

for(i = 0; i < quantidade; i++){

printf("Qual � o %i n�mero\n",i+ 1);
scanf("%i",&numeros[i]);

    if(verificaprimo(numeros[i])== 1){
        soma= soma + numeros[i];
        primo++;
    }
  }
  printf("\n A Soma dos N�meros primos � %i\n",soma);

  printf("\n Deseja saber como chegamos nesse c�lculo?(1 para sim)\n");
  scanf("%i",&professor);

  if(professor == 1){

    printf("\n Encontramos %i N�meros primos dos %i Digitados\n",primo,quantidade);
  }
    system("pause");
    return 0;
}
}

