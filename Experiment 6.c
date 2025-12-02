/*
NAME:Abdulla Anis Ahmed ShAikh
UIN:251M013
CLASS:FE MECHANICAL
DIV:F
*/

#include<stdio.h>

void counter() {
	static int count = 0;
	count ++;
	printf("Count = %d\n", count);
}

int main() {
	counter();
	counter();
	counter();

	return 0;
}
