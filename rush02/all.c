/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mis_funciones_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:22:22 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/28 18:35:23 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "todo.h"
#include <unistd.h>

void	hundreds(char *num, t_number_words *words)
{
	int		k;
	char	comp[4];
	char	comp2[2];

	k = 0;
	comp2[0] = num[0];
	comp2[1] = '\0';
	comp[0] = '1';
	comp[1] = '0';
	comp[2] = '0';
	comp[3] = '\0';
	if (num[0] != '0')
	{
		while (ft_strcmp(comp2, words[k].numbers) != 0)
			k++;
		ft_putstr(words[k].letters);
		write(1, " ", 1);
		k = 0;
		while (ft_strcmp(comp, words[k].numbers) != 0)
			k++;
		ft_putstr(words[k].letters);
		write(1, " ", 1);
	}
}

void	thousands(char *num, t_number_words *words)
{
	int		k;
	char	comp[5];
	char	comp2[2];

	k = 0;
	comp2[0] = num[0];
	comp2[1] = '\0';
	comp[0] = '1';
	comp[1] = '0';
	comp[2] = '0';
	comp[3] = '0';
	comp[4] = '\0';
	if (num[0] != '0')
	{
		while (ft_strcmp(comp2, words[k].numbers) != 0)
			k++;
		ft_putstr(words[k].letters);
		write(1, " ", 1);
		k = 0;
		while (ft_strcmp(comp, words[k].numbers) != 0)
			k++;
		ft_putstr(words[k].letters);
		write(1, " ", 1);
	}
}

char	*change_number(char *num, int cont)
{
	int	i;

	i = 0;
	while (i < cont - 1)
	{
		num[i] = num[i + 1];
		i++;
	}
	num[i] = '\0';
	return (num);
}

void	all(t_number_words *words, char *num)
{
	int		cont;

	cont = ustrlen(num);
	while (cont > 0)
	{
		if (cont == 1)
			units(num, words);
		else if (cont == 2 && (num[0] >= '1' && num[0] < '2'))
			cont = tens_ten(num, words);
		else if (cont == 2 && (num[0] >= '2' && num[0] <= '9'))
			tens_more(num, words);
		else if (cont == 3)
			hundreds(num, words);
		else if (cont == 4)
			thousands(num, words);
		else if (cont > 4)
		{
			write(1, "Error\n", 6);
			break ;
		}
		change_number(num, cont);
		cont--;
	}
}
