char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t i;
	i = 0;
	while	(i < n && src[i] != '0')
		{
		dest[i] = src[i];
		i++;
		}
	dest[n] = '\0';
	return (dest);
}

int main (void)
{
	char *dest;
	char *src;
	char kerelhom[] = "kerelhom";
	src = kerelhom;
	ft_strncpy(dest, src, 3);
	printf("%s", dest);
	return 0;
}