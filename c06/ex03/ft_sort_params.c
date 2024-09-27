/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:55:42 by veragarc          #+#    #+#             */
/*   Updated: 2024/08/01 11:25:34 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(int argc, char **argv)
{
	int	i;
	int	k;

	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i])
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k++;
	}
}

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

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				str = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = str;
			}
			j++;
		}
		i++;
	}
	imprimir(argc, argv);
}
