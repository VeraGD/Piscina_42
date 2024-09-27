/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:14:17 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 15:30:20 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
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

	arr[0] = '{';
	arr[1] = '(';
	arr[2] = '\0';
	j = ft_str_is_printable(arr);
	printf("%d", j);
}*/
