//Write a program to print whether a user entered number is an Armstrong number. Armstrong number is one
//which the sum Of the cube Of all its digits is same as the number.For example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)

#include<stdio.h>

int main() {
	int num;
	
	int count = 0;
	int lastDigit;
	int mult = 1;
	int armSum = 0;
	printf("\nEnter No. = ");
	scanf_s("%d", &num);
	int orgNum = num;

	while (num > 0) {
		num /= 10;
		count++;
	}

	for (int i = 1; i <= count; i++) {
		lastDigit = orgNum % 10;
		printf(" %d ",lastDigit);
		/*for (int j = 1; j <= count; j++) {
			mult = mult * lastDigit;
		}
		armSum = armSum + mult;*/
	}

	printf("\nArmstrong No. = %d \n",armSum);

	return 0;
}