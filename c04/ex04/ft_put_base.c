/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:46:30 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/31 14:14:49 by veragarc         ###   ########.fr       */
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

void	ft_putnbr_base(int nb, char *base)
{
	int		i;
	//char	c;

	i = ft_strlen(base);
	if (comprobar_base(base) == 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb > i)
		{
			//c = nb % i + '0';
			ft_putnbr_base(nb / i, base);
			write(1, &base[nb % i], 1);
		}
		if(nb <= i)
			write (1, &base[nb % i], 1);
	}
}

int	main(void)
{
	int	i;

	i = -2147483648;
	ft_putnbr_base(i,"0123456789ABCDEF");
}
