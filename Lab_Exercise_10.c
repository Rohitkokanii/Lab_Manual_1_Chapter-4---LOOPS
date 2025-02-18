//Write a program to display whether a user entered number is prime number or not.

#include<stdio.h>

int main() {
	int num;
	printf("\nEnter No. ");
	scanf_s("%d", &num);

	if (num == 2) {
		printf("\nPrime No\n");
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("\nNot Prime\n");
		}
		else {
			printf("\nPrime\n");
		}
	}
	return 0;
}