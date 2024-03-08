/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:33:13 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/08 15:24:43 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sort_params(char *one, char *tow)
{
	if (!(*one))
		return (0);
	else if (!(*tow))
		return (1);
	while (*one && *tow)
	{
		if (*one < *tow)
			return (0);
		else if (*tow < *one)
			return (1);
		else
		{
			one++;
			tow++;
		}
	}
	if (*one)
		return (1);
	else
		return (0);
}

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
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (ft_sort_params(av[j - 1], av[j]))
			{
				temp = av[j];
				av[j] = av[j - 1];
				av[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
		ft_putstr(av[i++]);
	return (0);
}
