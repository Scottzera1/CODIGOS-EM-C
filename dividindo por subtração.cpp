#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int divisaoPorSubtracao(int dividendo, int divisor) {
    int quociente = 0;

    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }

    return quociente;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\t\t--- TRABALHO DE PROGRAMAÇÃO---\n\n");
    printf("\t\t---UNIVERSIDADE ESTADUAL DE PONTA GROSSA uepg---\n\n");
    printf("\t\t---PROFESSOR: ALCEU DE SOUZA BRITTO JUNIOR---\n\n");
    printf("\t\t---AUTORIA: GUILHERME ANTÔNIO RA:22024223---\n\n");

    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    int quociente = divisaoPorSubtracao(dividendo, divisor);
    printf("Resultado da divisão: %d\n", quociente);

    return 0;
}
