#include <stdio.h>

int main(void) {
	// program starts with two integers and one operation. an answer variable is declared for later
	int x, y, result;
	char o;

	// Prompt asks for input
	printf("What would you like to do?\n");

	// then takes in assigns variables
	scanf("%d %c %d", &x, &o, &y);
	// sanity check
	// printf("%d %c %d\n", x, o, y);

	switch (o) {
		case '+':
		result = x + y;
		printf("the answer you seek is %d\n", result);
		break;
		case '-':
		result = x - y;
		printf("the answer you seek is %d\n", result);
		break;
	}


}