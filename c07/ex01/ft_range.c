/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:08:50 by emgumus           #+#    #+#             */
/*   Updated: 2024/02/11 14:08:52 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dizi;
	int	i;
	int	boyut;

	if (min >= max)
		return (0);
	boyut = max - min;
	dizi = (int *)malloc(sizeof(int) * boyut);
	if (!dizi)
		return (0);
	i = 0;
	while (i < boyut)
	{
		dizi[i] = min + i;
		i++;
	}
	return (dizi);
}
