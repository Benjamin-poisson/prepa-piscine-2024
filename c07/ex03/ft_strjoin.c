/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:52:55 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/12 00:44:59 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlens(char **str, int size)
{
	int	i;
	int	j;
	int	result;

	i = -1;
	j = -1;
	result = 0;
	while (i++ < size)
	{
		while (str[i][j++])
			result++;
	}
	return (i + j);
}

char *ft_join(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			dest[j] = strs[k][i];
			j++;
			i++;
		}
		i = 0;
		while (sep[i] && k != size - 1)
		{
			dest[j] = sep[i];
			i++;
			j++;
		}
		k++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		total_size;

	i = -1;
	total_size = 0;
	if (size <= 0)
		return (dest = malloc(0));
	while (i++ < size - 1)
		total_size += ft_strlen(strs[i]) + ft_strlen(sep);
	dest = malloc(sizeof(char) * total_size);
	if (dest == NULL)
		return (NULL);
	dest = ft_join(size, strs, sep, dest);
	return (dest);
}

