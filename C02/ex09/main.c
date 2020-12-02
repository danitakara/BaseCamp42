#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str[]="oi, Tudo bem? 42PALAVRAS quarenta-e-duas; a1 cinqUenta+e+um";
    ft_strcapitalize(str);
    printf ("%s\n", str);
}