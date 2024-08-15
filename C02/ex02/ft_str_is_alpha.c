/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:06:12 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/04 14:07:21 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	j;

	j = 0;
	if (str[j] == '\0')
		return (1);
	while (str[j] != '\0')
	{
		if ((str[j] >= 'a' && str[j] <= 'z')
			|| (str[j] >= 'A' && str[j] <= 'Z'))
		{
			++j;
		}
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "";
// 	printf("%d", ft_str_is_alpha(str));
// }