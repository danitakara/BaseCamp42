#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
	char dest[] = "edy";
	char src[] = "kerelhom";
	printf("%s", ft_strncpy(dest, src, 7));
	return 0;
}