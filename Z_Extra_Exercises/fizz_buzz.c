/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:58:46 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/12 23:56:21 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int number)
{
	if (number > 9)
	{
		ft_putchar(number / 10 + '0');
		ft_putchar(number % 10 + '0');
	}
	else
		ft_putchar(number + '0');
}

int	main(void)
{
	int number;

	number = 1;
	while (number <= 99)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			print_numbers(number);
		write(1, "\n", 1);
		number++;
	}
}