/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:43:36 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/24 13:17:28 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (i - 1 == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i - 1] = str[i - 1] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= ' ' && str[i - 1] <= '/')
				str[i] = str[i] - 32;
			else if (str[i - 1] >= ':' && str[i - 1] <= '@')
				str[i] = str[i] - 32;
			else if (str[i - 1] >= '[' && str[i - 1] <= '`')
				str[i] = str[i] - 32;
			else if (str[i - 1] >= '{' && str[i - 1] <= '~')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	arr[] = "salut, 42mots qua-deux; uante+et+un AAA23 sd4AA";

	char *str = ft_strcapitalize(arr);
	printf("%s", str);
}*/
