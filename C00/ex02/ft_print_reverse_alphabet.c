/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:01:16 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/24 11:48:53 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 122;
	while (a <= 122 && a >= 97)
	{
		write(1, &a, 1);
		--a;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}*/