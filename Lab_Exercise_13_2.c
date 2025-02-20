//

#include<stdio.h>

int main() {

	int upLeft_corner = 218;
	int downLeft_corner = 192;
	int upRight_corner = 191;
	int downRight_corner = 217;
	int vLine = 179;
	int hLine = 196;
	//printf("%c%c%c%c%c%c%c%c", upLeft_corner, hLine, hLine, hLine, hLine, hLine, hLine, upRight_corner);
	int height;
	int width;
	printf("\nEnter The Height = ");
	scanf_s("%d",&height);
	printf("\nEnter The Width = ");
	scanf_s("%d", &width);

	for (int i = 1; i <= height; i++) {
		if (i == 1) {
			for (int j = 1; j <= width; j++) {
				if (j == 1) {
					printf("%c", upLeft_corner);
				}
				else if (j == width) {
					printf("%c", upRight_corner);
				}
				else {
					printf("%c", hLine);
				}
			}
			printf("\n");
		}
		else if(i==2) {
			for (int j = 1; j <= width; j++) {
				if (j == 1) {
					printf("%c", vLine);
				}
				else if (j == width) {
					printf("%c", vLine);
				}
				else {
					printf(" ");
				}
			}
		}
		else if (i == height) {
			printf("\n");
			for (int j = 1; j <= width; j++) {
				if (j == 1) {
					printf("%c", downLeft_corner);
				}
				else if (j == width) {
					printf("%c", downRight_corner);
				}
				else {
					printf("%c",hLine);
				}
			}
		}
		else {
			printf("\n");
			for (int j = 1; j <= width; j++) {
				if (j == 1) {
					printf("%c", vLine);
				}
				else if (j == width) {
					printf("%c", vLine);
				}
				else {
					printf(" ");
				}
			}
		}
		
		
	}

	return 0;
}

/*
	printf("%c%c%c%c%c%c%c%c%c%c",218,196,196, 196,196, 196, 196, 196, 196, 191);
	printf("\n%c        %c",179,179);
	printf("\n%c%c%c%c%c%c%c%c%c%c",192,196,196, 196,196, 196, 196, 196, 196, 217);
*/