/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:09:42 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/28 19:11:05 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "todo.h"
#include <unistd.h>
#include <stdlib.h>

void	check_point(char *str, int j)
{
	if (str[j - 1] <= '0' || str[j - 1] >= '9')
	{
		write(1, "Error", 5);
	}
	else if (str[j + 1] == '\0')
	{
		str[j] = '\0';
	}
	else
	{
		write(1, "Error", 5);
	}
}

void	check_non_numerics(void)
{
	write(1, "Error", 5);
}

char	*check_number(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else if (str[i] == '.')
		{
			j = i;
			check_point(str, j);
			i++;
		}
		else
		{
			write(1, "Error", 5);
			break ;
			i++;
		}
	}
	return (str);
}

int	check_size(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		i++;
	}
	if (i >= 38)
		flag = 1;
	return (flag);
}

char	*fill_string(char *str)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *) malloc(38);
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	while (i < 39)
	{
		arr[i] = '\0';
		i++;
	}
	return (arr);
}
