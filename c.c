#include <stdio.h>
#include <stdlib.h>

int main()
{
	// char *str = malloc(sizeof(NULL));

	char *str = "salamloooool";
	printf("{%ld}", sizeof((int)str));
	printf("{%ld}", sizeof((int)NULL));
	// printf("{%ld}", sizeof((int)NULL));

}