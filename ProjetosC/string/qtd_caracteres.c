#include <stdio.h>
#include <string.h>
int main(void){

    int tam_String(char string[]);
    char stringUsuario[20];

    printf("digite uma palavra(string): \n");
    scanf("%s", stringUsuario);

    tam_String(stringUsuario);

    int num = tam_String(stringUsuario);

    printf("a string %s possui: %d caracteres. \n", stringUsuario, 
                                                    num);
    return 0;
}
int tam_String(char string[]){

    int numCaracteres = 0;

    while(string[numCaracteres] != '\0'){
        numCaracteres++;
    }   

    return numCaracteres; 
}
