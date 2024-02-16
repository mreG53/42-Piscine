/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:37:52 by emgumus           #+#    #+#             */
/*   Updated: 2024/02/06 14:37:53 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	temp = nb;
	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		nb *= temp;
		i++;
	}
	return (nb);
}
