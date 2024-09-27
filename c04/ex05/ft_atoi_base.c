/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:23:09 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/31 17:59:25 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	comprobar_base(char *base)
{
	int	i;
	int	j;
	int 	flag;

	i = 0;
	flag = 0;
	if (ft_strlen(base) < 1)
		flag = 1;
	while (i < ft_strlen(base))
	{
		if (base[i] == '+' || base[i] == '-')
			flag = 1;
		j = i + 1;
		while(j < ft_strlen(base))
		{
			if(base[i] == base[j])
				flag = 1;
			j++;
		}
		i++;
	}
	return (flag);
}

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

int	convertir(char *n, int *index, int len_base)
{
	int	i;
	int	len;
	int	num;

	i = 0;
	len = ft_strlen(n);
	while (n[i])
	{
		num = num + index[i] * len_base ** 
	
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	num;
	int	r;
	int	len_base;
	int	j;
	int	k;
	char	n[100];
	int	index[100];

	i = 0;
	num = 0;
	j = 0;
	k = 0;
	n[0] = 'a';
	index[0] = 'a';
	len_base = ft_strlen(base);
	if (comprobar_base(base) == 0)
	{ 
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i])
		{
			while (str[i] != base[j])
			{
				j++;
				if (j == len_base)
					break ;
			}
			if (str[i] == base[j])
			{
				n[k] = str[i];
				index[k] = j;
				j = 0;
				i++;
				k++;
			}
			if (j == len_base)
				break ;
		}
		printf("n %s\n", n);
		printf("index %d\n", index[1]);
		r = contador_signo(str) * num;
		return (r);
	}
	else 
		return (0);
}

int	main(void)
{
	char	d[] = "  ---4Agy65";
	//char	e[] = " ----00101ty6 -";
	int		j;
	//int		k;

	j = ft_atoi_base(d, "0123456789ABCDEF");
	//printf("%d\n", j);
	//k = ft_atoi_base(e, "01");
	//printf("%d\n", k);
}
