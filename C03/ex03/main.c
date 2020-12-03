#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char a[] = "o pior ";
	char b[] = "vai piorar\n";
	printf ("%s\n", strncat(a, b, 7));
	char c[] = "o pior ";
	printf ("%s\n", ft_strncat(c, b, 7));
	return (0);
}