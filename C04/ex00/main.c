#include <stdio.h>

int		ft_strlen(char *str);

int        main(void)
{
    char str[30] = "123456789";
    int oi;
    
    oi = ft_strlen(str);
    printf("%d", oi);
}