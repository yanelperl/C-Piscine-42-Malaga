/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:32:10 by jalcausa          #+#    #+#             */
/*   Updated: 2024/08/12 19:35:57 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_sign(char *str, int *ptr)
{
	int	c;
	int	i;

	i = 0;
	c = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			c = -c;
		++i;
	}
	*ptr = i;
	return (c);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= ' ' || base[i] == 127)
			return (0);
		j = i +1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (i);
}

int	ft_index_of(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;
	int	len;
	int	n;

	res = 0;
	len = ft_check_base(base);
	if (len > 0)
	{
		sign = ft_sign(str, &i);
		n = ft_index_of(str[i], base);
		while (str[i] && n != -1)
		{
			res = res * len + n;
			++i;
			n = ft_index_of(str[i], base);
		}
		return (res * sign);
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("  ++---21", "0123456789"));
	return (0);
}
*/
