/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:20:23 by veragarc          #+#    #+#             */
/*   Updated: 2024/08/01 14:35:03 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i = ft_strlen(src);
	int	j;
	char *copy = (char *)malloc(i + 1);

	if (copy == NULL) 
		return (NULL);
	j = 0;
	while (src[j])
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

int	main(void)
{
	char *s = "abcd";
	char *c = ft_strdup(s);

	printf("%s\n", c);
}
