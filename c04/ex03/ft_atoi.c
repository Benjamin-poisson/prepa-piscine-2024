/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:50:07 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/05 18:38:47 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_is_negatif(char *str)
{
	int	count;

	count = 0;
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			count++;
		str++;
	}
	if (count % 2 == 1)
	{
		str--;
		*str = '-';
	}
	return (str);
}

int	ft_atoi(char *str)
{
	char	*i_str;
	int		mult;
	int		result;
	int		check;

	check = 0;
	mult = 1;
	result = 0;
	str = ft_is_negatif(str);
	i_str = str;
	if (*i_str == '-')
	{
		i_str++;
		check++;
		str++;
	}
	while (*i_str >= '0' && *i_str <= '9')
		i_str++;
	while (i_str-- != str)
	{
		result += (*i_str - 48) * mult;
		mult = mult * 10;
	}
	if (check)
		result = -result;
	return (result);
}
