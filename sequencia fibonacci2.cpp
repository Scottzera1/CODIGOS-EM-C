#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/* A serie fibonacci: e como funciona 
    -> 1 2 3 4 5  6  usuario digita 
       0 1 3 5 8 13
     
     onde o programa vai ler um exemplo do que o usuario esta digitando entre 1 ate 10...
     e assim obtendo o enesimo termo do numero fornecido pelo usuario 
*/

int main(int argc, char * argv[]){
    
    setlocale(LC_ALL,"Portuguese");
    
    int i, ant1, ant2, atual;
    
    ant1 = 1;
    ant2 = 0;
    
    printf("serie de fibonacci(8 primeiros termos:)\n");
    printf("%d ", ant2);
    printf("%d ", ant1);
    
    /* aqui estamos tendo apresenca da estrutura repeticoes para os calculos
     correspondente ao termo abaixo e o controlador comecara em 3 por que o 1 e 2 
     ja estam imprimidor pela definicao  */
    
    for (i = 3; i<= 8;i++){ 
    atual = ant1 + ant2;
    printf("%d ",atual);
    
    
    ant2 = ant1;
    ant1 =atual;
}

printf("\n");

system("pause");
                
return 0;
}
    
 
