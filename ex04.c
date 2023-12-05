#include <stdio.h>

int main(){
	int n;
	int s = 1;
	printf("Digite um número para calcular a fatorial:");
	scanf("%d", &n);
	printf("Numero recebido: %d\n", n);
	for (int i = n; i >= 1; i--){
		s = s * i;
		if (i == 1){
			printf("%d", i);
		}else{
			printf("%d X ", i);
		}
		
	}
	printf(" = %d", s);
	return 0;
}