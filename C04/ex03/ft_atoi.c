/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:34:50 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/06 13:42:58 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	resultado;
	int	signo;

	i = 0;
	resultado = 0;
	signo = 1;
	while (str[i] == 32 || (str[i] >= 0 && str[i] <= 13))
		++i;
	while (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + str[i] - '0';
		i++;
	}
	return (resultado * signo);
}
