/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:22:34 by emgumus           #+#    #+#             */
/*   Updated: 2024/02/05 11:22:35 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	check_np;
	int	n;

	n = 0;
	i = 0;
	check_np = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			check_np *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * check_np);
}
