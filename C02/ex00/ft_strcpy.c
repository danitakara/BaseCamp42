#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	dest[5]="bunda";
	src[5]="merda";

	strcpy(dest, src);
	printf ("%s", dest);
	return 0;
}

