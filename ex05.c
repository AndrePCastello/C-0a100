#include <stdio.h>

int main(){
	int number;
	int r;

	printf("Digite um número:");
	scanf("%d", &number);

	r = number % number;
	if (number > 1 ){
		if (r == 0){
			printf("O seu número é primo: %d", number);
		}
	}else{
		printf("O seu número não é primo");
	}
	return 0;
}