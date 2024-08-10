/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:23:52 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/08 10:53:19 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lon;
	unsigned int	dest_lon;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	src_lon = ft_strlen(src);
	dest_lon = j;
	if (size == 0 || size <= j)
		return (src_lon + size);
	while (src[i] && i < size - dest_lon - 1)
	{
		dest[j] = src[i];
		++j;
		++i;
	}
	dest[j] = '\0';
	return (dest_lon + src_lon);
}

// int main(void)
// {
// 	char src[] = "hola buenas";
//  	char dest[] = "que tal";
//  	printf("%d", ft_strlcat(dest, src, 10));
//  	printf("%s", dest);
//  	return (0);
// }
