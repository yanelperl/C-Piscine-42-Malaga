/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:51:03 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/30 11:38:24 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temporal;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temporal = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temporal;
			}
			++j;
		}
		++i;
	}
}

// int	main(void)
// {
// 	int a[] = {5, 15, 40, 3, 12};
// 	ft_sort_int_tab(a, 5);
// 	printf("%d, %d, %d, %d, %d", a[0], a[1], a[2], a[3], a[4]);
// 	return 0;
// }