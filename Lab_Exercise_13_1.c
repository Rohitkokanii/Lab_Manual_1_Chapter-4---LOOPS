//Write a program to find Pythagorean triplets in the range O to 100. For example, 3^2 + 4^2 = 5^2 None of the
//numbers should repeat.

#include<stdio.h>

int main() {

	for (int i = 1; i < 100; i++) {
		int a = i;

		int mult_a = 1;
		for (int j = 1; j <= 2; j++) {
			mult_a = mult_a * a;
		}

		for (int i2 = i + 1; i2 <= 100; i2++) {
			int b = i2;

			int mult_b = 1;
			for (int k = 1; k <= 2; k++) {
				mult_b = mult_b * b;
			}

			for (int i3 = i + 2; i3 <= 100; i3++) {
				int c = i3;
				int mult_c = 1;
				for (int e = 1; e <= 2; e++) {
					mult_c = mult_c * c;
				}

				if ((mult_a + mult_b) == mult_c) {
					printf("\n(%d, %d, %d)\n", a, b, c);
				}
			}

		}
		

		
	}

	return 0;
}

/*
int b = i + 1;
		int c = i + 2;

		

		

		

		

*/
