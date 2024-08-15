/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:31:31 by yaperalt          #+#    #+#             */
/*   Updated: 2024/08/13 15:17:01 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	j;
	int	resultado;

	j = 1;
	resultado = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		while (j < power)
		{
			resultado = resultado * nb;
			j++;
		}
	}
	return (resultado);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(4, 3));
// }
