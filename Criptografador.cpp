#include<stdlib.h> 
#include<stdio.h>
#include <string.h>
#include <ctype.h>

char converter (char ch, int chave)
{
     if (!isalpha(ch))
     {
     return ch;
     }
     char offset =  isupper (ch)? 'A':'a';
     return (char)(((ch + chave) - offset)%26 + offset);                  
     }
     char *criptografar (char  * entrada, int chave )
     {
          int tamanho = strlen (entrada );
          char * saida = (char *) malloc(sizeof (char )* tamanho);
          
          if (!saida)
          {
            printf ("\n\nErro na memoria\n\n");
            return NULL;        
                     }
                     memset(saida, '0', sizeof (char )* strlen(entrada ));
                     
                     for (int i = 0; i < tamanho; i++)
                     {
                         char temp[ 2 ] = {converter(entrada [i],chave ),'0'};
                         strncat(saida, temp, 1);
                         } 
                         return saida;
          }
                   
int main()
{
     int chave = 1;
     char * resultado =0;
     char *texto = "ola mundo!";
     
     resultado = criptografar (texto, chave);
     
      printf("criptografado:%s\n", resultado );
      
      printf
      free (resultado);
      
      printf(" \n\n ");
      system("pause");
      return 0;
    }
