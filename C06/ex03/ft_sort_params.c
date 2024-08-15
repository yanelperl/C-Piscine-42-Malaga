/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:37:03 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/06 09:03:55 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		write(1, &str[temp], 1);
		temp++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	sort_params(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		i2;

	i = 1;
	while (i < argc)
	{
		i2 = 1;
		while (i2 < argc - 1)
		{
			if (ft_strcmp(argv[i2], argv[i2 + 1]) > 0)
			{
				temp = argv[i2];
				argv[i2] = argv[i2 + 1];
				argv[i2 + 1] = temp;
			}
			i2++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	iterator;

	iterator = 1;
	if (argc > 1)
		sort_params(argc, argv);
	while (iterator < argc)
	{
		ft_putstr(argv[iterator]);
		ft_putstr("\n");
		iterator++;
	}
	return (0);
}
