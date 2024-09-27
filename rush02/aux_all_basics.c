/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar_prueba_numeros.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:19:38 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/28 16:19:59 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "todo.h"
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char	*str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		write(1, &a, 1);
		i++;
	}
}
