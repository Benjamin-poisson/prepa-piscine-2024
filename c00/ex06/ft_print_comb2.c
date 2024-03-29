/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:36:37 by bpoisson          #+#    #+#             */
/*   Updated: 2024/02/22 12:08:13 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar((first / 10) + 48);
			ft_putchar((first % 10) + 48);
			write(1, " ", 1);
			ft_putchar((second / 10) + 48);
			ft_putchar((second % 10) + 48);
			if (first != 98 || second != 99)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
