#include <stdio.h>
int main()
{
    int numero, cifra;

    printf("digite um  numero: \n");
    scanf("%d %d",&numero);

    if(numero >= 0){
        do{
            cifra = numero % 10;
            printf("%d",cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");
    }
    else if (numero < 1){
        
        printf("-");
        numero = numero * -1;

        do{
            cifra = numero % 10;
            printf("%d",cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");
        
    }
    return 0;
}




