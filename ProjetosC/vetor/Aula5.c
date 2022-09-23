#include <stdio.h>

int main (){
	
	int i, n;
    printf("digite a quantidade de figurinhas total do album: ");
	scanf("%d", &n);
	int vet[n];
	
	for(i = 0; i < n; i++)
		scanf("a%d", &vet[i]);
	printf("[ ");
	for (i = 0; i < n; i++)
		if (vet[i]%2 == 1)
			printf("%d ", vet[i]);
	printf("]\n[ ");
	for (i = 0; i < n; i++)
		if (vet[i]%2 == 0)
			printf("%d ", vet[i]);
	printf("]\n");

	return 0;
}