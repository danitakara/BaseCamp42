#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char a[] = "to bege!";
    char b[] = "to bege";
    
    int k = ft_strncmp(a, b,);
    printf("%d\n", k);
    return (0);
}