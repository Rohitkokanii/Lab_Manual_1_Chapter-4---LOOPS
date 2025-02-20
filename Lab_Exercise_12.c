//display first 25 prime numbers(2, 3, 5, ...97).

#include<stdio.h>

int main() {
	int count = 0;

	for (int i = 88; 1; i++) {
		int num = i;
		int isPrime = 1;

		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			count++;
			printf("\n%d] Prime No. = %d\n",count,num);
		}
		if (count == 25) {
			break;
		}

	}
	return 0;
}