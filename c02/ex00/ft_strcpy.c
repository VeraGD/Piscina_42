/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:56:54 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/16 14:50:31 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	arr[4];
	char	str[4];

	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = 'c';
	arr[3] = '\0';
	str[0] = 'n';
        str[1] = 'm';
        str[2] = 'o';
        str[3] = '\0';

	char *dest = ft_strcpy(str, arr);
	printf("%c", dest[1]);
}*/
