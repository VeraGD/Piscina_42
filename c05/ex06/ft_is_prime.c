/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:29:14 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/31 14:54:16 by veragarc         ###   ########.fr       */
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

/*int	main(void)
{
	int	j;
	int	k;

	j = 0;
	while (j <= 100)
	{
		k = ft_is_prime(j);
		printf("el numero %d", j);
		printf(" es primo %d\n", k);
		j++;
	}
}*/
