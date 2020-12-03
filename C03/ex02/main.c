#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char a[] = "o pior ";
	char b[] = "vai piorar\n";
	printf ("%s", ft_strcat(a, b));
	return (0);
}