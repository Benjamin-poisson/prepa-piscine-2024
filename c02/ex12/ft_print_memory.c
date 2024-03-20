/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:11:20 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/20 17:34:59 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putmemory(void *nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 99)
	{
		ft_putmemory(nbr / 10);
	}
	else if (nbr != 0)
	{
		ft_putchar((nbr / 10) + 48);
	}
	ft_putchar((nbr % 10) + 48);
}


void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size == 0)
		return (NULL);
}

int	main(void)
{
	char str[] = "Bonjour, ";
	ft_putmemory(&str);
	ft_putchar('\n');
}
