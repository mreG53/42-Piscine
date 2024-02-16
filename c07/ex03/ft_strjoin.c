/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:44:30 by emgumus           #+#    #+#             */
/*   Updated: 2024/02/11 15:44:30 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	calculate_total_len(int size, char **strs)
{
	int	tlen;
	int	i;

	tlen = 0;
	i = 0;
	while (i < size)
	{
		tlen += ft_strlen(strs[i]);
		i++;
	}
	return (tlen + size - 1);
}

void	fill_str(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*result++ = strs[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				*result++ = sep[k++];
		}
		i++;
	}
	*result = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		tlen;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	tlen = calculate_total_len(size, strs);
	result = (char *)malloc(sizeof(char) * (tlen + 1));
	if (!result)
		return (0);
	fill_str(result, strs, sep, size);
	return (result);
}
