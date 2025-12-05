/******************************************************************************
NAME:Abdulla Anis Ahmed Shaikh
UIN:251M013
CLASS:MECHANICAL
DIV:F
*/
#include <stdio.h>

int main() {
	int a, b, sum;
	int *p1, *p2;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);


	p1 = &a;
	p2 = &b;


	sum = *p1 + *p2;

	printf("Sum = %d\n", sum);

	return 0;
}
