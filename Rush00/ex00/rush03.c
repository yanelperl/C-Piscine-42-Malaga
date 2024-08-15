/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:44:55 by sscheini          #+#    #+#             */
/*   Updated: 2024/07/28 18:48:45 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_header(int x, int column)
{
	if (column == 1)
		ft_putchar('A');
	else if (column == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_print_middle(int x, int column)
{
	if (column == 1 || column == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

int	ft_check_dimensions(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Negative or inexistent dimensions.", 35);
		ft_putchar('\n');
		write(1, "Dimensions expected to be between 1 - 10.000.", 45);
		return (0);
	}
	if (x > 10000 || y > 10000)
	{
		write(1, "Dimensions exceed expected parameters.", 39);
		ft_putchar('\n');
		write(1, "Dimensions expected to be between 1 - 10.000.", 45);
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (ft_check_dimensions(x, y) == 0)
		return ;
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (row == 1 || row == y)
				ft_print_header(x, column);
			else
				ft_print_middle(x, column);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
