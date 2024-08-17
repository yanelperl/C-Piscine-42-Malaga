/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:21:06 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/15 18:40:55 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
