/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:22:29 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/15 18:42:17 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	length;
	int	i;

	length = max - min;
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * length);
	if (range == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

// int	main(void)
// {
//  	int	min = 1217;
//  	int	max = 12131941;
//  	int	*str;
//  	str = ft_range(min, max);
//  	printf("%d", str[0]);
// }