/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:37:00 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/02 12:08:34 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
		argc--;
		write(1, "\n", 1);
	}
}
