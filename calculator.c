#include <stdio.h>

int main(void) {
	// program starts with two integers and one operation. an answer variable is declared for later
	int x, y;
	int i = 2, result = 1;
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
		break;

		case '-':
			result = x - y;
		break;

		case '*':
			result = x * y;
		break;

		case '/':
			result = x / y;
		break;
		
		case '!':
			while (i <= x ) {
				result = result * i;
				i++;
			}
		break;

		default:
			printf("I'm sorry I couldn't understand. :(\n Probably because the guy who built me is a noob. :(\n\n");
	}
	printf("the answer you seek is %d\n", result);
}
