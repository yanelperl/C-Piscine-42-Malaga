/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:38:51 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/29 12:07:19 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribirdigito(char c)
{
	write(1, &c, 1);
}

void	imprimirnum(char c)
{
	escribirdigito(c / 10 + '0');
	escribirdigito(c % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			imprimirnum(a);
			escribirdigito(' ');
			imprimirnum(b);
			if (!(a == 98 && b == 99))
			{
				escribirdigito(',');
				escribirdigito(' ');
			}
			++b;
		}
		++a;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
