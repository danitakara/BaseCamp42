#include <stdio.h>

int        ft_str_is_uppercase(char *str);

int main(void)
{
    char str[]="ABC";
    int a;

    a=ft_str_is_uppercase(str);
    printf ("%d\n", a);
}