#include <stdio.h>
int main()
{
    int n, a;

    printf("digite a quantidade de figurinhas total do album: ");
    scanf("%d",&n);

    int vetor[n];
    //Preencher vetor de quantidade de figurinhas
    for(int i = 0; i < n; i++)
        scanf("%d",&vetor[i]);
        printf("[ ");

    //Preencher vetor com quantidade de figurinhas
    for(int i = 0; i < n; i++)
        if(vetor[i]%2 == 1)
        printf("%d ", vetor[i]);
        printf("]\n[ ");
    
    //ordenar o vetor de figurinhas que tenho
    //comparar as figuras e guarda os resultados 
    for(int i = 0; i < n; i++)
        if(vetor[i]%2 == 0)
            printf("%d ", vetor[i]);
	printf("]\n ");

    return 0;
}