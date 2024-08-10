/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:50:46 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/24 14:12:57 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a >= 97 && a <= 122)
	{
		write(1, &a, 1);
		++a;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return(0);
}*/