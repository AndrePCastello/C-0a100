#include <stdio.h>

int main() {
    int n;
    int soma;
    while(n <= 99){
        ++n;
        soma += n;
    }
    printf("A soma desses número é: %d\n", soma);
    return 0;
}
