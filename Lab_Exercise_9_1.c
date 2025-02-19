//Problem Statement 1
//Write a program to display ASCII characters in the range(0 - 255).The display should pause after displaying every
//10 characters.

#include<stdio.h>
//#include<conio.h>
/*
int main() {
	int userAns=1;
	int count=10;
	int iUpadate = 0;
	int i = iUpadate;
	
	do {
		
		for (; i <= count;i++) {
			printf("\nASCII (%d) = %c\n", i, i);
		}
		
		printf("\nDo you want Continue 1:Yes , 0:No = ");
		scanf_s("%d",&userAns);
		count += 10;
		iUpadate += 10;
		
	} while (userAns!=0);

	return 0;
}
*/

//Using Getch() function
int main() {
	int userAns = 1;
	int count = 10;
	int iUpdate = 0;
	int i = iUpdate;

	do {

		for (; i <= count; i++) {
			printf("\nASCII (%d) = %c\n", i, i);
		}

		printf("\nPress Any Key To Continue \n");
		getch();
		//scanf_s("%d", &userAns);
		if (count == 250) {
			count += 5;
		}
		else {
			count += 10;
			iUpdate += 10;
		}
		
	} while (count <= 255);

	return 0;
}