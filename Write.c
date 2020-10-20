#include <stdio.h>
#include <string.h>

char* write(char * input) {
	char* appension = "Null-Byte";
	return strcat(input, appension);
}
