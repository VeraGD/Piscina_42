/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:43:20 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 15:00:13 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	arr[3];
	char	str[4];

	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = 'c';
	arr[3] = '\0';
	str[0] = 'n';
        str[1] = 'm';
        str[2] = 'o';
        str[3] = '\0';

	char *dest = ft_strncpy(str, arr, 5);
	printf("%c", dest[0]);
	printf("%c", dest[1]);
	printf("%c", dest[2]);
	printf("%c", dest[3]);
	printf("%c", dest[4]);
}*/
