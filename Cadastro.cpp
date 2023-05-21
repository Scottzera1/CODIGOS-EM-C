#include <stdio.h>
#include <stdlib.h>
// Autor e academico foi: Guilherme Antônio Gomes da Silva
// desenvolvido no dia 29/11/2022!!!
// Pela Universidade Estadual de Ponta Grossa 
int main (){
	
	int opcao,opcao1,opcao2,opcao3,opcao4,1,quant;
	
	struct referencia{
		
		char nome0[100],endereco[100]; 
		int Cpf[12], NumCasa[5], sal[7];
	
		
	}
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	CA[600];
	
	char nome1[100];

system ("cls");
printf("Nome do Auxiliar: ");
fflush(stdin);
scanf("%[^\n]s",nome1);

printf("Senha de acesso: ");
scanf("%d ",&opcao3);

switch(opcao3){

case 123456:

while (opcao!=6){
while(opcao2!=1){
  system("color f4");
  system("cls");
  
  printf("---------------------------------------------------------");
  printf("\t\t\t\tSenha de acesso \n");
  printf("---------------------------------------------------------\n\n");
  printf("\t\t\tSeja Bem vindo, Auxiliar %s\n",nome1);
  printf("_________________________________________________________\n");
  printf("1-cadastrar\n" );
  printf("2-exibir dados\n " );
  printf("3-alterar\n  " );
  printf("4-excluir\n  " );
  printf("5-informacao\n  " );
  printf("6-sair\n " );
  printf("---------------------------------------------------------\n\n");
  printf("\nQual opcao voce deseja acessar?  " );
  scanf("%d",&opcao);
  
  switch (opcao){
  	case 1:
    system ("cls");
	printf("\n\nQuais sao seus dados cadastro voce deseja colocar?  " );
	scanf ("%d",&quant);
	
	for(i=1;i<=quant;i++){
		system("cls");
	  printf("\t\t\t\t   INICIANDO O SEU CADASTRO %d\n",i);
       printf("\t\t\t----------------------------------------------\n\n ");
       printf("\n\n Nome da Pessoa:");
       fflush(stdin);
       scanf("%[^\n]s",CA[i].nome0);
        
		 printf("\n  Digite o CPF da pessoa:");
       fflush(stdin);
       scanf("%[^\n]s",CA[i].cpf);
        
		 printf("\n Endereco da Pessoa:");
       fflush(stdin);
       scanf("%[^\n]s",CA[i].endereco);
         
		 printf("\n Numero da  casa:");
       fflush(stdin);
       scanf("%[^\n]s",CA[i].NumCasa);
       
         printf("\n Salario da Pessoa:");
       fflush(stdin);
       scanf("%[^\n]s",CA[i].sal);
       printf("\n\n\t\t"); 
	   system("pause");
       system ("cls");
}
  break;
  
  case 2:
  	   system ("cls");
  	   
  	   	for(i=1;i<=quant;i++){
  	   	system ("cls");
  	   	printf("\n\n\t\t       EXIBIR CADASTRO %d\n",i );
  	   	printf("\t\t\t----------------------------------------------\n\n ");
  	   	 printf("Nome da Pessoa: %s\n",CA[i].nome0);
  	   	printf("\n Cadastro de Pessoa Física/CPF: %s\n",CA[i].cpf);
  	   	printf("\n Endereco da Pessoa: %s\n " ,CA[i].endereco);
  	   	printf("\n Numero da  casa: %s\n " ,CA[i].NumCasa);
  	   	printf("\n Salario da Pessoa: %s\n " ,CA[i].sal); 
		system("pause");
  }  
   break;
  
  case 3:
  	system ("cls");
  	for(i=1;i<=quant;i++){
  	printf("\n\n\t\t       ALTERAR O CADASTRO %d\n",i );
	printf("\t\t\t----------------------------------------------\n\n ");
	printf("\n 1- Nome da Pessoa:");
	printf("\n 2- Cadastro de Pessoa Física/CPF ");
	printf("\n 3- Endereco da Pessoa ");  
	printf("\n 4- Numero da casa \n\n ");  
	printf("\n 5- Salario da Pessoa ");
	printf("Qual opcao voce desejar acessar?\n");
    scanf("%d",&opcao1)
	
	switch(opcao1){
	case 1:
	for(i=1;i<=quant;i++){
	system ("cls");
	printf("\n\n CADASTRO %d\n",i);
	printf("\n Alterar o Nome da Pessoa: ");
	fflush(stdin);
	scanf("%[^\n]s",CA[i].nome0);
	printf("\n Novo Nome da Pessoa: %s\n\n\t\t");
	system("pause");	
	}  
	break; 
	
	switch(opcao1){
	case 2:
	for(i=1;i<=quant;i++){
	system ("cls");
	printf("\n\n CADASTRO %d\n",i);
	printf("\n Alterar o Cadastro de Pessoa Física/CPF: ");
	fflush(stdin);
	scanf("%[^\n]s",CA[i].cpf);
	printf("\n  Novo Cadastro de Pessoa Física/CPF %s\n\n\t\t");
	system("pause");		
}
 	break; 
	
	switch(opcao1){
	case 3:
	for(i=1;i<=quant;i++){
	system ("cls");
	printf("\n\n CADASTRO %d\n",i);
	printf("\n Alterar o Endereco da Pessoa: ");
	fflush(stdin);
	scanf("%[^\n]s",CA[i].endereco);
	printf("\n  Novo Endereco da Pessoa: %s\n\n\t\t");
	system("pause");		
}
break; 
	
	switch(opcao1){
	case 4:
	for(i=1;i<=quant;i++){
	system ("cls");
	printf("\n\n CADASTRO %d\n",i);
	printf("\n Alterar o Numero da casa ");
	fflush(stdin);
	scanf("%[^\n]s",CA[i].NumCasa;
	printf("\n  Novo Numero da casa: %s\n\n\t\t");
	system("pause");		
}
break; 
	
	switch(opcao1){
	case 5:
	for(i=1;i<=quant;i++){
	system ("cls");
	printf("\n\n CADASTRO %d\n",i);
	printf("\n Alterar o Salario da Pessoa ");
	fflush(stdin);
	scanf("%[^\n]s",CA[i].sal;
	printf("\n  Novo Salario da Pessoa: %s\n\n\t\t");
	system("pause");		
 }
break;
  }
 }
break;

	system ("cls");
  	for(i=1;i<=quant;i++){
  	printf("\n\n\t\t       EXCLUIR O CADASTRO %d\n",i );
	printf("\t\t\t----------------------------------------------\n\n ");
	printf("\n 1- Nome da Pessoa:");
	printf("\n 2- Cadastro de Pessoa Física/CPF ");
	printf("\n 3-  Endereco da Pessoa");  
	printf("\n 4- Numero da casa\n\n ");  
	printf("\n 5- Salario da Pessoa ");
	printf("Qual opcao voce desejar acessar?\n");
	scanf("%d",&opcao4);
}
	switch(opcao4){
	case 1:
	  
	      for(i=1;i<=quant;i++){
	      system ("cls");
	      memset(&CA[i].nome0.0,sizeof(CA[i].nome0));
	      printf("Nome da Pessoa foi Excluído!\n\n");
	      system("pause");
}
break;

case 2:
    
	for(i=1;i<=quant;i++){	
	 system ("cls");
	  memset(&CA[i].cpf.0,sizeof(CA[i].cpf));
	      printf("Cadastro de Pessoa Física/CPF foi Excluído!\n\n");
	      system("pause");
}
break;

case 3:
    
	for(i=1;i<=quant;i++){	
	 system ("cls");
	  memset(&CA[i].endereco.0,sizeof(CA[i].endereco));
	      printf("Endereco da Pessoa foi Excluído!\n\n");
	      system("pause");
}
break;

case 4:
    
	for(i=1;i<=quant;i++){	
	 system ("cls");
	  memset(&CA[i].NumCasa.0,sizeof(CA[i].NumCasa));
	      printf("Numero da casa foi Excluído!\n\n");
	      system("pause");
}
break;

case 5:
    
	for(i=1;i<=quant;i++){	
	 system ("cls");
	  memset(&CA[i].sal.0,sizeof(CA[i].sal));
	      printf("Salario da Pessoa  foi Excluído!\n\n");
	      system("pause");
}
break;
case 6:
	
    for(i=1;i<=quant;i++){	
    system ("cls");
    memset(&CA[i].nome0.0,sizeof(CA[i].nome0));
    memset(&CA[i].cpf.0,sizeof(CA[i].cpf));
    memset(&CA[i].endereco.0,sizeof(CA[i].endereco));
    memset(&CA[i].NumCasa.0,sizeof(CA[i].NumCasa));
    memset(&CA[i].sal.0,sizeof(CA[i].sal));
    printf("Todos os Dados foram Ecluídos com Sucesso!!\n\n");
      system("pause");
  }
  break;
 }
 break;
}
case 5:
system ("cls"); 
printf("Dados Colocados: \n\n");
printf("Guilherme Antônio \n");
printf("99999999999 \n");
printf("Marechal Hermes \n");
printf("663\n");
printf("99999 \n");
printf("Copyright©2022\n\n");
system("pause");

 break;
 
 case 6:
 system ("cls");
 printf("\n Voce realmente Deseja Sair?\n\n");
 printf(" 1- Sim\n 2- Nao");
 printf("\n\n");
 scanf("%d",&opcao2);
 
 switch(opcao2){
 	case 1:
 		 system ("cls");
 		 printf("Volte Sempre,ate uma proxima :) \n\n\n\t\t ");
 		 system("pause");
 		 return 0;
 		 break;
   }
   }
   }
   break;
    }
  }
 system("pause");
 return 0;
}
}
}
}
}
}