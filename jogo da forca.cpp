#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

/*
  Name: Jogo da forca  
  Author: Guilherme Ant�nio
  Date: 28/03/23 01:10
  Description: aplica��o do jogo /corre��o de bugs e do sistema de banco 
   
*/
// fiz com que ele escolhesse aletoriamente uma palavra por rodada e contendo um sistema de vida basico

using namespace std;

const int quant_palavras = 6;

char banco[quant_palavras][30]={
"cachorro",
"computador",
"cadeira",
"automovel",
"edificio",
"smartphone"};

char palavra_sort[30];
char palavra_dig[30];



int Sorteia(){
    srand(time(NULL));
    return rand() % (quant_palavras);
}

void imprime_palavra_dig(){
    cout<<"\n     "<<strlen(palavra_sort)<<" letras \n\n    ";
    for(int i=0;i < strlen(palavra_sort) ;i++){
        cout<<palavra_dig[i]<<" ";
    }
}

void copia(int ind){
    for(int i=0;i<30;i++){
        palavra_sort[i] = banco[ind][i];
    }
}

void limpa_palavra_dig(){

    for(int i=0;i < strlen(palavra_sort);i++){
        palavra_dig[i] = '_';
    }
}

void imprime_forca(int let_erro){
    switch(let_erro){
         case 0:
            cout<<"  _____ "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 1:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 2:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |    | "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 3:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /| "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 4:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /|\\"<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 5:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /|\\"<<endl;
            cout<<" |   /  "<<endl;
            cout<<" |      "<<endl;
            break;
        case 6:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /|\\"<<endl;
            cout<<" |   / \\"<<endl;
            cout<<" |       "<<endl;
            break;
    }
}

bool verifica_letra(char letra, char vetor[26]){
    for(int i=0;i<strlen(vetor);i++){
        if(letra==vetor[i]){
            return true;
        }
    }
    return false;
}

void substitui(char letra){
    for(int i=0;i<strlen(palavra_sort);i++){
        if(palavra_sort[i]==letra){
            palavra_dig[i] = letra;
        }
    }

}

void imprime_let_dig(char letras[], int tam){
    cout<<"\n\n Letras digitadas: ";
    for(int i=0;i < tam ;i++){
        cout<<letras[i]<<", ";
    }
    cout<<"\n";
}

bool palavra_completa(){
    for(int i=0;i<strlen(palavra_sort);i++){
        if(palavra_dig[i]=='_'){
            return false;
        }
    }
    return true;
}

int main(){

    int ind_palavra = Sorteia(); //Sortear uma palavra

    copia(ind_palavra);

    limpa_palavra_dig(); // Função responsável por limpar o vetor da palavra digitada

    int cont_let_dig=0;      // contador de letras digitadas

    int cont_erros=0;

    char letras_digitadas[26];

    char letra;

    while(cont_erros<6){
        system("cls");
        imprime_forca(cont_erros);
        imprime_palavra_dig();
        imprime_let_dig(letras_digitadas,cont_let_dig);
        cout<<"\n\n Tentativas restantes: "<<6-cont_erros<<"\n\n";
        cout<<"\n\n";
        cout<<"Digite uma letra: ";
        cin>>letra;
        letra = tolower(letra);
        if(verifica_letra(letra,letras_digitadas)){
            cout<<"Letra ja foi digitada! Tente novamente!\n\n";
            system("pause");
        }else{
            letras_digitadas[cont_let_dig] = letra;
            cont_let_dig++;

            if(verifica_letra(letra,palavra_sort)){
                substitui(letra);
            }else{
                cout<<"\nLetra incorreta! Tente novamente\n\n";
                cont_erros++;
                system("pause");

            }
        }

        if(cont_erros>=6){
            system("cls");
            cout<<"\n\n\tSuas tentativas acabaram!\n Reinicie o software para tentar novamente!\n";
            system("pause");
            return 0;
        }
        if(palavra_completa()){
            cout<<"\n\tPARABENS!!!\n Voce acertou a palavra!\n\n";
            system("pause");
            return 0;
        }
    }

    return 0;
}
