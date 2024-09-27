/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:50:30 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 15:37:22 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*int	main(void)
{
	char	arr[4];

	arr[0] = 'A';
	arr[1] = 'b';
	arr[2] = '1';
	arr[3] = '\0';
	char *str = ft_strupcase(arr);
	printf("%c", str[0]);
	printf("%c", str[1]);
	printf("%c", str[2]);
}*/
