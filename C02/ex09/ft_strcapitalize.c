/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:56:54 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/02 14:40:51 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nalfanumerico(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	return (1);
}

int		alphanum(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (nalfanumerico(str[i - 1]) == 0)
				str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (nalfanumerico(str[i - 1]) == 0)
			{
			}
			if (alphanum(str[i - 1]) == 0)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
