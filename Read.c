#include <stdio.h>
#include <stdlib.h>

char* read() {
	// int size = sizeof(input / input[0]);

	char *input = (char*)malloc(100 * sizeof(char));

	printf("Enter a String: ");
	scanf("%s", input);
	printf("%s: %p", "Memory Address from Input", &input);

	return input;
}
