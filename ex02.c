#include <stdio.h>

int main(){
	int n;
	while (n < 99 || n == 99){
		int soma;
		n = n + 1;
		int divisor = 2;
		soma = n % divisor;
		if (soma == 0){
			printf("%d\n", n);
		}
	}
	return 0;
}