#include <stdio.h>
#include <stdlib.h>
int fibon(int n){
     if (n == 1)
     return (0);
     
     if (n == 2)
     return (1);
     
     int i, F = 0,F1 = 0, F2 = 1;
     for (i = 3; i <= n;i++){
         
         F = F1 + F2;
         F1 = F2;
         F2 = F;
         
         }
       return (F);
     }
     
int main (){
 
 int i;
 for (i = 1; i <= 10; i++){
     printf("%2d: %d\n", i, fibon(i));
 }
   
  
    system("pause");
}
