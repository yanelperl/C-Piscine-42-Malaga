/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:05:33 by yaperalt          #+#    #+#             */
/*   Updated: 2024/07/31 08:56:02 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	j;

	j = 0;
	if (str[j] == '\0')
	{
		return (1);
	}
	while (str[j] >= 'a' && str[j] <= 'z')
	{
		++j;
		if (str[j] == '\0')
		{
			return (1);
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "holabuenas";
// 	ft_str_is_alpha(str);
// }