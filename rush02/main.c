/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:09:22 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/27 16:53:04 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "todo.h"

int	fill_main(char *num)
{
	char			buffer[692];
	t_number_words	words[41];

	if (check_size(num) == 0)
	{
		num = check_number(num);
		num = fill_string(num);
		if (read_dict(buffer, 692) != 0)
			return (1);
		split_dict(words, buffer);
		all(words, num);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*num;
	char	*dict;

	(void)*dict;
	if (argc == 2)
	{
		num = argv[1];
		fill_main(num);
		if (ft_strcmp(argv[1], "0") == 0)
			write(1, "zero\n", 5);
	}
	else if (argc == 3)
	{
		num = argv[2];
		dict = argv[1];
		fill_main(num);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
