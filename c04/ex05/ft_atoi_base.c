/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:37:38 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/09 15:12:37 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (str[i] == '+' || str[i] == '-' || *str == ' ' || *str == '\n'
			|| *str == '\t' || *str == 'v' || *str == '\r' || *str == '\f')
			return (1);
		i++;
	}
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (1);
	return (0);
}

int	check_if_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c) 
		i++;
	return (i);
}


int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	neg;
	int	size;
	int	i;

	i = 0;
	result = 0;
	neg = 0;
	size = ft_strlen(base);
	if (gest_error(base))
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == 'v'
		|| *str == '\r' || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	while (*str)
	{
		if (!(check_if_in_base(*str, base) == 0))
			result = result + *str % size;
		break;
	}
	if (neg % 2)
		return (-result);
	return (result);
}
