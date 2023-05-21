#include <stdio.h>

int main(void)
{
 char url[]="arquivo.txt",
      ch;
 int num=0;
 FILE *arq;
 
 arq = fopen(url, "r");
 if(arq == NULL)
   printf("Erro, nao foi possivel abrir o arquivo\n");
 else
  while( (ch=fgetc(arq))!= EOF )
   if(ch == '\n')
     num++;
 
 printf("Existem %d linhas no arquivo\n", num);
 fclose(arq);
 
 return 0;
}
