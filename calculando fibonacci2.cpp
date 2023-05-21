#include <stdio.h>
#include <stdlib.h>

/* calculando o enesimo termo com funcao da sequencia fibonacci
   1 2 3 4 5 6 7...
   0 1 1 2 3 5 8...
*/
int fibonacci(int n){
    if (n == 1)
    return 0;
    
    else {
         if(n == 2)
           return 1;
         
         else
        return  fibonacci(n - 1) + fibonacci(n - 2);  
         }
}

int main (){
int n;

printf("Favor digitar um valor que nao seja menor do que zero: ");
scanf("%d", &n);

printf ("O termo %d eh: %d\n", n, fibonacci(n));

system("pause");
}
     
     
