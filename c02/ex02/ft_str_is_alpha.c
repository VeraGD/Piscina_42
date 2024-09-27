/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:24:54 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 15:16:10 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
	arr[1] = 1;
	arr[2] = '\0';
	j = ft_str_is_alpha(arr);
	printf("%d", j);
}*/
