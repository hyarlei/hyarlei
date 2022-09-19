#include <stdio.h>
int main(){

    float media, nota1, nota2, nota3 = 0;
    int num1, num2, num3, guarda = 0;

    media = nota1 + nota2 + nota3 / 3;

    if(media >= 7.0){
        printf("aprovado");
        else if(media > 5 && nota3 >= 7.0){
        printf("aprovado");
    }
        else if(num1 > num2 && num1 > num3){
        printf("aprovado");
    }
        else if(num2 > num1 && num2 > num3){
        printf("aprovado");
    }
        else if(num3 > num1 && num3 > num2){
        printf("aprovado");
    }
        else{
            printf("reprovado");
        }
    }
    return 0;
}

    

    

    