/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:59:05 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/03 21:52:57 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int        main(void)
{
    char string1[] = "if you don't love yourself, how the hell you're gonna love somebody else";
    char string2[] = "hell";

    printf("%s\n", ft_strstr(string1, string2));
    printf("%s\n", strstr(string1, string2));
    return (0);
}