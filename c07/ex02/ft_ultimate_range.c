/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:14:38 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/09 01:19:07 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = malloc(((max - min) + 1) * sizeof(int));
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (*range);
	free (*range);
}
