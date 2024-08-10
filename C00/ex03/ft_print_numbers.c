/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:04:28 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/24 11:36:05 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c >= 48 && c <= 57)
	{
		write(1, &c, 1);
		++c;
	}
}

/*int main(void)
{
    ft_print_numbers();
    return(0);
}*/