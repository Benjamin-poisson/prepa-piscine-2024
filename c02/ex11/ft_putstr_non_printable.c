/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:32:15 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/01 01:15:42 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c < ' ' || c > '~')
	{
		return (0);
	}
	return (1);
}

void	ft_print_char_to_hexa(char c)
{
	char	tab[16];
	int		i;
	int		first;

	i = 0;
	first = 0;
	while (i <= 9)
	{
		tab[i] = i + 48;
		i++;
	}
	while (i <= 15)
	{
		tab[i] = i + 87;
		i++;
	}
	while (c > 16)
	{
		first++;
		c = c - 16;
	}
	ft_putchar(first + 48);
	i = c;
	ft_putchar(tab[i]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_char_is_printable(str[i])))
		{
			ft_putchar(92);
			ft_print_char_to_hexa(str[i]);
		}
		else if (ft_char_is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
