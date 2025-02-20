//Modify Lab Exercise 2 to display all Armstrong numbers in the range O to 1000. Use for loop.

#include<stdio.h>

int main() {

	for (int i = 0; i <= 1000; i++) {
		int num = i;
		int temp = i;
		int count = 0;
		int sum = 0;
		
		while (num > 0) {
			count++;
			num /= 10;
		}

		for (int j = 1; j <= count; j++) {
			int lastDigit = temp % 10;

			int mult = 1;
			for (int b = 1; b <= count; b++) {
				mult = mult * lastDigit;
			}
			sum = sum + mult;
			temp /= 10;
		}
		if (sum == i) {
			printf("\nArmstrong = %d", i);
		}
	}

	return 0;
}