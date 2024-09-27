/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:19:29 by farias            #+#    #+#             */
/*   Updated: 2024/07/28 13:19:32 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "todo.h"

int	read_dict(char *buffer, int size)
{
	int	fd;
	int	bytes_read;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	bytes_read = read(fd, buffer, size - 1);
	if (bytes_read == -1)
	{
		write(1, "Dict Error\n", 11);
		close(fd);
		return (1);
	}
	buffer[bytes_read] = '\0';
	if (close(fd) == -1)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	return (0);
}
