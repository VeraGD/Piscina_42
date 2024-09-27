/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:17:20 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/31 15:24:19 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb < 0)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (2);
	else
	{
		while (ft_is_prime(i) != 1)
			i++;
	}
	return (i);
}

/*int	main(void)
{
	int	j;

	j = ft_find_next_prime(16);
	printf("%d\n", j);
}*/
