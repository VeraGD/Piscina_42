/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ustring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:04:14 by farias            #+#    #+#             */
/*   Updated: 2024/07/28 19:04:42 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "todo.h"

char	*ustrcpy(char *dest, char *src)
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

int	ustrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
