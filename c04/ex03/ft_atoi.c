/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:23:09 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/27 17:38:08 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	contador_signo(char *str)
{
	int	i;
	int	m;
	int	flag;

	i = 0;
	m = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] == '-' && flag == 0)
			m++;
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 1;
		i++;
	}
	if (m % 2 != 0 && m > 0)
		return (-1);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	r;

	i = 0;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	r = contador_signo(str) * num;
	return (r);
}

/*int	main(void)
{
	char	d[] = "  --- 4567gy65";
	char	e[] = " ----00206ty6 -";
	char	f[] = " ---2000ty6 -";
	char	g[] = " ---f20202ty6 -";
	int		j;
	int		k;
	int		l;
	int		m;

	j = ft_atoi(d);
	printf("%d\n", j);
	k = ft_atoi(e);
	printf("%d\n", k);
	l = ft_atoi(f);
	printf("%d\n", l);
	m = ft_atoi(g);
	printf("%d\n", m);
}*/
