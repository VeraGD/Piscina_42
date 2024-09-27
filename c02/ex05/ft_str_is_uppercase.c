/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:06:42 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 15:24:48 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	arr[0] = 'A';
	arr[1] = 'B';
	arr[2] = '\0';
	j = ft_str_is_uppercase(arr);
	printf("%d", j);
}*/
