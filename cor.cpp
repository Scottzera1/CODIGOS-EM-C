#include<stdlib.h>
#include <stdio.h>
#include <windows.h>
/*
  Name: COR
  Author: Guilherme Antônio  
  Date: 27/03/23 23:17
  Description: mudar a cor dos caracteres do sistema (Windows)
*/

int main(){
    printf ("Cor original.\n");
    getchar();
    
// esta funcao  muda apenas a cor dos caracteres
  //ela pertence a biblioteca da <windows.h>
  
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
   printf("e agora como ficou.\n");
   system ("pause");
   
// aceita entradas de  valores entre 0 a 255.

}
