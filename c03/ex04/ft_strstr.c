/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:44:15 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/25 10:44:33 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0' && str[i] == to_find[j])
			{
				j++;
				i++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i - j]);
			}
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Hello, this is a simple test.";
	char	to_find1[] = "simple";
	char	*result;

	result = ft_strstr(str, to_find1);
	printf("Found: '%s'\n", result);
}*/
