/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:44:14 by bpoisson          #+#    #+#             */
/*   Updated: 2024/02/20 15:35:39 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_multi_int(int first, int second, int third)
{
	first = first + 48;
	second = second + 48;
	third = third + 48;
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first != '7' || second != '8' || third != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	undred;
	int	ten;
	int	unit;

	undred = 0;
	ten = 1;
	unit = 2;
	while (undred <= 7)
	{
		while (ten <= 8)
		{
			while (unit <= 9)
			{
				ft_print_multi_int(undred, ten, unit);
				unit++;
			}
			unit = 2 + ten;
			ten++;
		}
		ten = 1 + undred;
		undred++;
	}
}
