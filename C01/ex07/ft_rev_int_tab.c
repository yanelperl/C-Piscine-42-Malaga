/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:44:30 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/30 11:16:17 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temporal;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temporal = tab[i];
		tab[i] = tab[j];
		tab[j] = temporal;
		--j;
		++i;
	}
}

// int	main(void)
// {
// 	int a[] = {1,2,3,4,5};
// 	ft_rev_int_tab(a, 5);
// 	printf("%d, %d, %d, %d, %d", a[0], a[1], a[2], a[3], a[4]);
// 	return 0;
// 	}