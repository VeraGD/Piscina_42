/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:55:06 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 15:23:10 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			flag = 0;
			i++;
		}
	}
	return (flag);
}

/*int	main(void)
{
	char	arr[3];
	int		j;

	arr[0] = 'a';
	arr[1] = 'o';
	arr[2] = '\0';
	j = ft_str_is_lowercase(arr);
	printf("%d", j);
}*/
