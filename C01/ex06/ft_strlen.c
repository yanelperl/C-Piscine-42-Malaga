/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:10:41 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/30 11:14:01 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		++contador;
	}
	return (contador);
}

// int	main(void)
// {
// 	char	*str = "hola buenas";
// 	int	contador2 = ft_strlen(str);
// 	printf("%d", contador2);
// }