#include <stdio.h>
#include <stdlib.h>

int main()
{
	// char *str = malloc(sizeof(NULL));

	char *str = "salam";
	printf("{%ld}", sizeof((int)str));
	printf("{%ld}", sizeof(NULL));
	// printf("{%ld}", sizeof((int)NULL));

}