/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_buffer_2.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:02:07 by farias            #+#    #+#             */
/*   Updated: 2024/07/28 19:02:13 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "todo.h"
#include <stdlib.h>

void	handle_colon(t_number_words *words, t_buffers *bufs)
{
	handle_number(words, (*bufs).num_buf, (*bufs).j, (*bufs).k);
	(*bufs).j = 0;
}

void	handle_newline(t_number_words *words, t_buffers *bufs)
{
	handle_letter(words, (*bufs).let_buf, (*bufs).j, (*bufs).k);
	(*bufs).j = 0;
	(*bufs).k++;
}

void	process_char(char ch, t_number_words *words, t_buffers *bufs)
{
	if (ch >= '0' && ch <= '9' && (*bufs).fl == 0)
	{
		handle_digit(ch, bufs);
	}
	else if (ch == ' ')
	{
		handle_colon(words, bufs);
		(*bufs).fl = 1;
	}
	else if (ch == '\n')
	{
		handle_newline(words, bufs);
		(*bufs).fl = 0;
	}
	else if ((*bufs).fl == 1)
	{
		(*bufs).let_buf[(*bufs).j++] = ch;
	}
}

void	process_buffer(t_number_words *words,
	char *buffer, char *num_buf, char *let_buf)
{
	int			i;
	t_buffers	bufs;

	i = 0;
	bufs.num_buf = num_buf;
	bufs.let_buf = let_buf;
	bufs.j = 0;
	bufs.k = 0;
	bufs.fl = 0;
	while (i < 692)
	{
		process_char(buffer[i], words, &bufs);
		i++;
	}
}

void	split_dict(t_number_words *words, char *buffer)
{
	char	*num_buf;
	char	*let_buf;
	int		i;

	num_buf = malloc(256);
	let_buf = malloc(256);
	i = 0;
	while (i < 41)
	{
		words[i].numbers = NULL;
		words[i].letters = NULL;
		i++;
	}
	process_buffer(words, buffer, num_buf, let_buf);
	free(num_buf);
	free(let_buf);
}
