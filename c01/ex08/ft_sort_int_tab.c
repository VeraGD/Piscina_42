/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:01:17 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/15 14:18:27 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			a = tab[j];
			b = tab[j +1];
			if (a > b)
			{
				tab[j] = b;
				tab[j + 1] = a;
			}
			j++;
		}
		i++;
	}
}
