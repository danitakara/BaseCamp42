#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main (void)
{
	char dest[] = "edy";
	char src[] = "kerelhom";
	printf("%s", ft_strcpy(dest, src));
	return 0;
}