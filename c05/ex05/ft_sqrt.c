/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:19:05 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/08 00:41:03 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 0;
	while (index * index <= nb)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
