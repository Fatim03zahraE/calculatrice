#include <stdio.h>
#include <stdlib.h>

int main()
{
     float A,B;
     char op,c;

     do{
    printf("\n**********************************************************************************\n");
    printf("si vous voulez quitter cliquer sur q 'sinon' entrer un autre caractere pour continue:\n");
    printf("**************************************************************************************\n");
    scanf("\n%c",&c);
     if(c!='q'){
    printf("--------------------------------------------------------------------\n");
     printf("\nEntrer le premier nombre\n");
     scanf("%f",&A);
    printf("--------------------------------------------------------------------\n");
     printf("Entrer le deuxieme  nombre\n");
     scanf("%f",&B);
    printf("--------------------------------------------------------------------\n");
     printf("Entrer un operateur **pour la soustraction(-)**pour l'addition(+)**pour la division(/)**pour le produit(*)**\n");
     scanf("\n%c",&op);
       printf("--------------------------------------------------------------------\n");
    switch(op)
     {
            case '+' :
        printf("%f+%f =%f",A,B,A+B);
        break;
    case '-':
        printf("%f-%f =%f",A,B,A-B);
        break;
    case '*':
        printf("%f*%f =%f",A,B,A*B);
        break;
    case '/':
        if(B!=0)
        {
            printf("%f/%f =%f",A,B,A/B);
        }
        else{
           printf("error");
        }
        break;
    default: printf("erreur");
     }
     }else
     {
         exit(0);
     }
     }while(op!='q');


return 0;
}
