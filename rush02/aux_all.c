/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar_todo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:27:06 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/28 18:33:36 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "todo.h"
#include <unistd.h>

void	units(char *num, t_number_words *words)
{
	int	k;

	k = 0;
	if (num[0] != '0')
	{
		while (words[k].numbers)
		{
			if (ft_strcmp(num, words[k].numbers) == 0)
			{
				ft_putstr(words[k].letters);
				break ;
			}
			k++;
		}
	}
}

int	tens_ten(char *num, t_number_words *words)
{
	int	k;

	k = 0;
	while (words[k].numbers)
	{
		if (ft_strcmp(num, words[k].numbers) == 0)
		{
			ft_putstr(words[k].letters);
			break ;
		}
		k++;
	}
	return (0);
}

void	tens_more(char *num, t_number_words *words)
{
	int		k;
	char	comp[3];

	k = 0;
	comp[0] = num[0];
	comp[1] = '0';
	comp[2] = '\0';
	while (ft_strcmp(comp, words[k].numbers) != 0)
		k++;
	ft_putstr(words[k].letters);
	write(1, " ", 1);
}
