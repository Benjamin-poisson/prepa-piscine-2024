/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:27:03 by bpoisson          #+#    #+#             */
/*   Updated: 2024/02/22 13:02:14 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab_int(int *tab, int n)
{
	int	i;

	i = 0;
	while (i != n)
	{
		ft_putchar(tab[i + 48]);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	i = 0;
	while (i <= n)
	{
		tab[i] = i;
		i++;
	}
	ft_print_tab_int(tab, n);
}

int	main(void)
{
	ft_print_combn(3);
}
