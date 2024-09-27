/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:18:17 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/31 14:58:17 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	i = nb - 1;
	while (i > 1)
	{
		if (nb / i == i && nb % i == 0)
			return (i);
		i--;
	}
	return (0);
}

/*int	main(void)
{
	int	j;

	j = ft_sqrt(25);
	printf("%d\n", j);
}*/
