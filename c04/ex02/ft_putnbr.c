/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:38:15 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/27 17:14:05 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	c;

	i = 1;
	if (nb > -2147483648 && nb < 2147483647)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		while (nb / i >= 10)
			i = i * 10;
		while (i > 0)
		{
			c = nb / i + '0';
			write(1, &c, 1);
			nb = nb % i;
			i = i / 10;
		}
	}
	else if (nb == 2147483647)
		write(1, "2147483647", 10);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
}

/*int	main(void)
{
	int	i;

	i = 2147483646;
	ft_putnbr(i);
}*/
