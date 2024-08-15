/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:06:12 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/04 13:33:31 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	j;

	j = 0;
	if (str[j] == '\0')
	{
		return (1);
	}
	while (str[j] >= 32 && str[j] <= 126)
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