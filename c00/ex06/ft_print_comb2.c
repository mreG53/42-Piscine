/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:44:45 by emgumus           #+#    #+#             */
/*   Updated: 2024/01/25 15:44:51 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	s1;
	int	s2;

	s1 = 0;
	s2 = 1;
	while (s1 <= 98)
	{
		s2 = s1 + 1;
		while (s2 <= 99)
		{
			ft_putchar((s1 / 10) + 48);
			ft_putchar((s1 % 10) + 48);
			write(1, " ", 1);
			ft_putchar((s2 / 10) + 48);
			ft_putchar((s2 % 10) + 48);
			if (s1 != 98 || s2 != 99)
			{
				write(1, ", ", 2);
			}
			s2++;
		}
		s1++;
	}
}
