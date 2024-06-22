/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:37:38 by bpoisson          #+#    #+#             */
/*   Updated: 2024/06/22 15:08:06 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_error(char *base)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (base[size])
		size++;
	if (size < 2)
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_neg(char *str)
{
	int	neg;

	neg = 0;
	while (*str == ' ' || *str == '-' || *str == '+' || *str == '\n'
		|| *str == '\t' || *str == '\v' || *str == '\r' || *str == '\f')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	return (neg % 2);
}

int	ft_inside_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	size;

	result = 0;
	i = 0;
	size = 0;
	while (base[size])
		size++;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		i++;
	if (ft_check_error(base))
		return (0);
	while (ft_inside_base(str[i], base) != -1)
	{
		result = (result * size) + (ft_inside_base(str[i], base));
		i++;
	}
	if (ft_is_neg(str))
		return (-result);
	return (result);
}

