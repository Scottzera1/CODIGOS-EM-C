#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main( int argc, char const*argv[]){
	char frase[500];
	int Tam = 0;
	printf("Digite a sua frase: \n");
	fgets(frase,500,stdin),
	
	Tam = strlen(frase);
	printf("Esta frase tem %d letras\n",Tam);
	return 0; 
}