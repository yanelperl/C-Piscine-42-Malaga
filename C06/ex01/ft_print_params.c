/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:36:58 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/02 12:01:07 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	g;

	g = 1;
	while (g < argc)
	{
		i = 0;
		while (argv[g][i])
		{
			write(1, &argv[g][i], 1);
			i++;
		}
		write(1, "\n", 1);
		g++;
	}
}
