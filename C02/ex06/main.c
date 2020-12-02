#include <stdio.h>

int        ft_str_is_printable(char *str);

int main(void)
{
    char str[]="á";
    int a;

    a=ft_str_is_printable(str);
    printf ("%d\n", a);
}



