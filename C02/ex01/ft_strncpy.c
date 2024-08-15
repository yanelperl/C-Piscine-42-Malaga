/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:02:24 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/04 13:54:28 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		++j;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "";
// 	char	src[] = "hola buenas";
// 	unsigned int n = 4;
// 	ft_strncpy(dest, src, n);
// 	printf("%s", dest);
// }