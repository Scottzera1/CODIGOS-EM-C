#include <stdio.h>
#include <stdlib.h>

main()
{
    float nota1, nota2, media;
    
    printf("       *** M%cdia entre duas notas ***\n\n", 130);
    
    
    printf("\n\nDigite a primeira nota:\n\n");
    scanf ("%f", &nota1);
    printf("\n\nDigite a segunda nota:\n\n");
    scanf("%f", &nota2);
    
    
    media = (nota1+nota2)/2;
    
    printf("\n\nM%cdia: %.2f.\n\n", 130, media);
    
    printf("Situa%c\xC6o: \n\n", 135);
    
    
    
   // if(media>=5)
//    {
//       printf("Aprovado.");
//    }
//    if(media < 3)
//    {
//       printf("Reprovado.");
//    }
//    else 
//    {
//       printf("Recupera%c\xC6o.");
//    }
        
  
    if(media>=5)
    {
       printf("Aprovado.");
    }
    else if(media < 3)
    {
       printf("Reprovado.");
    }
    else 
    {
       printf("Recupera%c\xC6o.");
    }


    
    printf("\n\n\n");
    system("pause");
}