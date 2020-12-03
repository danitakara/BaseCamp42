#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int        main(void)
{
    char a[] = "to bege!";
    char b[] = "to bege";

    int k = ft_strcmp(a, b);
    printf("Diferença: %d\n", k);
    return (0);
}