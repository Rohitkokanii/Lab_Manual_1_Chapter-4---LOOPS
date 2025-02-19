//Write a program to display whether a user entered number is prime number or not.

#include<stdio.h>

int main() {
	int num;
	printf("\nEnter No. ");
	scanf_s("%d", &num);
	int isPrime = 1;
	if (num < 2) {
		printf("\nNot Prime\n");
		return 0;
	}
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) {
			isPrime = 0;
			break;
		}
	}

	if (isPrime) {
		printf("\nPrime No\n");
	}
	else {
		printf("\nNot Prime\n");
	}

	return 0;
}