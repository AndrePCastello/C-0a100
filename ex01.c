#include <stdio.h>

int main(){
	int number;
	printf("Enter a int number: ");
	scanf("%d", &number);
	printf("Your number is: %d\n", number);
	if (number > 0 || number == 0){
		printf("Your number is positive: %d\n", number);
	}else if (number < 0){
		printf("Your number is negative: %d\n", number);
	}else{
		printf("Your number is a trangender");
	}
}

