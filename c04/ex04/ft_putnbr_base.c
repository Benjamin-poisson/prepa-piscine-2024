/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:47:13 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/09 15:37:54 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	gest_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	long	nb;
	int		size;

	nb = nbr;
	size = ft_strlen(base);
	if (!(gest_error(base)))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= size)
			ft_putnbr_base(nb / size, base);
		c = base[nb % size];
		write(1, &c, 1);
	}
}
