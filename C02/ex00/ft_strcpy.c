/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:05:25 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/04 11:33:29 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		++j;
	}
	dest[j] = src[j];
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "";
// 	char	src[] = "hola buenas";
// 	ft_strcpy(dest, src);
// 	printf("%s", dest);
// 	return (0);
// }