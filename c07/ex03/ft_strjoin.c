/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:52:55 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/09 17:48:39 by bpoisson         ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*dest;
	int		total_size;

	k = 0;
	i = 0;
	j = 0;
	total_size = 0;
	if (size <= 0)
	{
		dest = malloc(0);
		return(dest);
	}
	while (i < size)
	{
		total_size += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	printf("Taille memoire = %d\n", total_size);
	dest = malloc(sizeof(char) * total_size);
	if (dest == NULL)
	{
		printf("ERROR MALLOC");
		return (NULL);
	}
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			dest[j] = strs[k][i];
			i++;
			j++;
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
	printf("\n");
	return (dest);
}

