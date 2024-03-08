/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:27:16 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/08 01:50:39 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sqrt(int nb)
{
	int	index;

	index = 0;
	while (index * index < nb)
		index++;
	return (index + 1);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	j;
	int	max;

	i = 2;
	max = is_sqrt(nb);
	if (nb <= 1)
		return (0);
	while (i <= max)
	{
		j = 2;
		while (i * j < nb)
			j++;
		if (i * j == nb)
			return (0);
		i++;
	}
	return (1);
}
