/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:30:36 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/17 20:03:18 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	s1[4];
	char	s2[4];
	char	*c;

	s1[0] = 'a';
	s1[1] = 'd';
	s1[2] = 'c';
	s1[3] = '\0';
	s2[0] = 'a';
	s2[1] = 'b';
	s2[2] = 'c';
	s2[3] = '\0';
	c = ft_strncat(s1, s2, 2);
	printf("%s\n", c);
}*/
