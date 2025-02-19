//Write a program to print whether a user entered number is an Armstrong number. Armstrong number is one
//which the sum Of the cube Of all its digits is same as the number.For example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)

#include<stdio.h>

int main() {
	int num;
	
	
	printf("\nEnter No. = ");
	scanf_s("%d", &num);
	int a = num;
	int orgNum = num;
	int count = 0;
	int lastDigit;
	int armSum = 0;

	while (num > 0) {
		count++;
		num /= 10;
	}

	for (int i = 1; i <= count; i++) {
		lastDigit = a % 10;
		int mult = 1;
		for (int j = 1; j <= count; j++) {
			mult = mult * lastDigit;
		}
		armSum = armSum + mult;
		a /= 10;
	}
	if (armSum == orgNum) {
		printf("\nArmstrong No. = %d \n", armSum);
	}
	else {
		printf("\nNot Armstrong\n");
	}
	

	return 0;
}