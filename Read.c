#include <stdio.h>
#include <stdlib.h>

char* read() {
	// int size = sizeof(input / input[0]);

	char *input = (char*)malloc(100 * sizeof(char));

	printf("Enter a String: ");
	scanf("%s", input);
	printf("%s: %p \n", "Memory Address from Input", &input);
	printf("%s: %s \n", "Value from Input", input);

	return input;
}
