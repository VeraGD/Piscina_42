/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_buffer_1.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:01:17 by farias            #+#    #+#             */
/*   Updated: 2024/07/28 19:01:34 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "todo.h"
#include <stdlib.h>

void	handle_number(t_number_words *words, char *num_buf, int j, int k)
{
	num_buf[j] = '\0';
	words[k].numbers = malloc(ustrlen(num_buf) + 1);
	ustrcpy(words[k].numbers, num_buf);
}

void	handle_letter(t_number_words *words, char *let_buf, int j, int k)
{
	let_buf[j] = '\0';
	words[k].letters = malloc(ustrlen(let_buf) + 1);
	ustrcpy(words[k].letters, let_buf);
}

void	handle_digit(char ch, t_buffers *bufs)
{
	(*bufs).num_buf[(*bufs).j++] = ch;
}
