/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   todo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:53:22 by farias            #+#    #+#             */
/*   Updated: 2024/07/28 19:53:26 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_number_words
{
	char	*numbers;
	char	*letters;
}	t_number_words;

typedef struct s_buffers
{
	char	*num_buf;
	char	*let_buf;
	int		j;
	int		k;
	int		fl;
}	t_buffers;

void	hundreds(char *num, t_number_words *words);
void	thousands(char *num, t_number_words *words);
char	*change_number(char *num, int cont);
void	all(t_number_words *words, char *num);
void	units(char *num, t_number_words *words);
int		tens_ten(char *num, t_number_words *words);
void	tens_more(char *num, t_number_words *words);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char	*str);
void	check_point(char *str, int j);
void	check_non_numerics(void);
char	*check_number(char *str);
int		check_size(char *str);
char	*fill_string(char *str);
void	handle_digit(char ch, t_buffers *bufs);
void	handle_letter(t_number_words *words, char *let_buf, int j, int k);
void	handle_number(t_number_words *words, char *num_buf, int j, int k);
void	split_dict(t_number_words *words, char *buffer);
void	process_buffer(t_number_words *words, char *buffer,
			char *num_buf, char *let_buf);
void	process_char(char ch, t_number_words *words, t_buffers *bufs);
void	handle_newline(t_number_words *words, t_buffers *bufs);
void	handle_colon(t_number_words *words, t_buffers *bufs);
int		read_dict(char *buffer, int size);
char	*ustrcpy(char *dest, char *src);
int		ustrlen(char *str);
