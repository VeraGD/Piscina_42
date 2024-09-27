/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:40:28 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/25 10:42:07 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	src_len = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	while (i < size - 1 && src[src_len] != '\0')
	{
		dest[i] = src[src_len];
		i++;
		src_len++;
	}
	while (src[src_len] != '\0')
		src_len++;
	dest[i] = '\0';
	if (size == 0)
		return (src_len);
	else if (dest_len < size)
		return (size + src_len);
	else
		return (dest_len + src_len);
}

/*int	main(void)
{
	char	dest[] = "de";
	char	src[] = "abc";
	char    dest1[] = "de";
        char    src1[] = "abc";
	char    dest2[] = "de";
        char    src2[] = "abc";
	unsigned int	s;
	unsigned int    s1;
	unsigned int    s2;

	s = ft_strlcat(dest, src, 2);
	printf("%d\n", s);
	s1 = ft_strlcat(dest1, src1, 3);
        printf("%d\n", s1);
	s2 = ft_strlcat(dest2, src2, 0);
        printf("%d\n", s2);
}*/
