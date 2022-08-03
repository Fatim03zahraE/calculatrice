#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    float A,B;
    char op,ch;
   do{
        printf("\nEntrer le premier nombre\n");
     scanf("%f",&A);
     printf("Entrer le deuxieme  nombre\n");
     scanf("%f",&B);
     printf("Entrer un operateur\n");
     scanf("%s",&op);
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
    default:
        printf("erreur");
     }
} while(op!='q');
    return 0;
}
