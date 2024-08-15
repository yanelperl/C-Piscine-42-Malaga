/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:03:04 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/01 14:46:01 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	j;

	j = 0;
	if (str[j] == '\0')
	{
		return (1);
	}
	while (str[j] >= '0' && str[j] <= '9')
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