#include <stdio.h>
#include <stdlib.h>

char* exitProgram() {
	char _SIGNAL[100];

	printf("Type something to exit: ");

	scanf("%s", _SIGNAL);

	return _SIGNAL;
}
