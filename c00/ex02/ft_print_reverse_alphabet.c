/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:09:35 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/11 14:10:16 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ini;
	char	c;
	int		i;

	ini = 'z';
	i = 0;
	while (i >= -25)
	{
		c = ini + i;
		write(1, &c, 1);
		i--;
	}
}
