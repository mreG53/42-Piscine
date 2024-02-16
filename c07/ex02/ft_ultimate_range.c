/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:05 by emgumus           #+#    #+#             */
/*   Updated: 2024/02/11 15:21:06 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	boyut;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	boyut = max - min;
	*range = (int *)malloc(sizeof(int) * boyut);
	if (!(*range))
		return (-1);
	i = 0;
	while (i < boyut)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (boyut);
}
