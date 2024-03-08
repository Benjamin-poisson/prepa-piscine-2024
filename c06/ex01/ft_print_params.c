/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:11:09 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/08 14:28:22 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return (1);
	while (i < ac)
		ft_putstr(av[i++]);
	return (0);
}
