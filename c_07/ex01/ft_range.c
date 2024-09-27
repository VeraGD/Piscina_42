/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:43:40 by veragarc          #+#    #+#             */
/*   Updated: 2024/08/01 15:04:33 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*arr = NULL;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max -min) * 4);
	if (arr == NULL)
		return (NULL);
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}

int	main(void)
{
	int *ii = ft_range(-1, -3);
	if (ii == NULL)
		printf("%d\n", 1);
	/*printf("%d\n", ii[0]);
	printf("%d\n", ii[1]);
	printf("%d\n", ii[2]);
	printf("%d\n", ii[3]);*/
	//printf("%d\n", ii[4]);
	//printf("%d\n", ii[5]);
	//printf("%d\n", ii[6]);
}
