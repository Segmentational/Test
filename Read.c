#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

char* read() {
	// int size = sizeof(input / input[0]);

	char input[100];

	printf("Enter a String: ");
	scanf("%s", input);
	printf("%s: %p", "Memory Address from Input", &input);

	return &input;
}
