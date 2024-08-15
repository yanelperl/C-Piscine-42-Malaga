/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:08:53 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/04 15:08:46 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		++i;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else if (!(str[i] >= 'a' && str[i] <= 'z'))
			j = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "";
// 	printf("%s", ft_strcapitalize(str));
// }