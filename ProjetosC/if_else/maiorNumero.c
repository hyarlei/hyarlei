#include <stdio.h>
int main(){
    int num1, num2, num3;

    printf("digite um numero: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 >= num2){
        
        if(num1 >= num3){
            printf("o maior numero e: %d", num1);
        }
        else{
            printf("o maior numero e: %d", num3);
        }
    }
    else{
        
        if(num2 >= num1){
            
            if(num2 >= num3){
                printf("o maior numero e: %d", num2);
            }
        }
    }
    return 0;
}