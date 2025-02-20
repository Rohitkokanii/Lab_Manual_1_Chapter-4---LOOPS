//Modify Lab Exercise 3 in Chapter 3 to display the menu until the user desires to continue.

#include<stdio.h>

int main() {
	int choice;
	int ans;
	do {
		printf("\nEnter \n1.Addtion \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit \n= ");
		scanf_s("%d", &choice);

		switch (choice) {
			int n1, n2;
		case 1:printf("\nAddition\n");
			printf("\nEnter Two No. = ");
			scanf_s("%d%d", &n1, &n2);
			printf("\nAddition = %d\n", n1 + n2);

			break;
		case 2:printf("\nSubtraction\n");
			printf("\nEnter Two No. = ");
			scanf_s("%d%d", &n1, &n2);
			printf("\nSubtraction = %d\n", n1 - n2);
			break;
		case 3:printf("\nMultiplication\n");
			printf("\nEnter Two No. = ");
			scanf_s("%d%d", &n1, &n2);
			printf("\nMultiplication = %d\n", n1 * n2);
			break;
		case 4:printf("\nDivision\n");
			printf("\nEnter Two No. = ");
			scanf_s("%d%d", &n1, &n2);
			printf("\nDivision = %f\n", (float)n1 / n2);
			break;
		case 5:printf("\nThank you!\n");
			break;
		default:
			printf("\nInvalid Input\n");
		}
		
		printf("\nDo you want continue Yes:1 | No:0 = ");
		scanf_s("%d", &ans);

	} while (ans != 0);

	return 0;
}