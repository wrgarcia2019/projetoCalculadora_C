#include <stdio.h>

int main() {
	int i, num;
	float soma = 0, media;
	
	printf("Digite 10 valores: \n");
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		soma += num;
	}
	
	media = soma / 10;
	
	printf("a média dos valores é: %.2f\n", media);
	
	return 0;
}
