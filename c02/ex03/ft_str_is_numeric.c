/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:46:55 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 15:21:24 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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

	arr[0] = '2';
	arr[1] = '1';
	arr[2] = '\0';
	j = ft_str_is_numeric(arr);
	printf("%d", j);
}*/
