/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:02:20 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/14 15:24:17 by lribera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_conditional(int row, int column, int x, int y)
{
	if (row == 1 && (column == 1 || column == x))
		ft_putchar('A');
	else if (row == y && (column == 1 || column == x))
		ft_putchar('C');
	else if (row == 1 || row == y)
		ft_putchar('B');
	else if ((row != 1 || row != y) && (column == 1 || column == x))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_conditional(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
