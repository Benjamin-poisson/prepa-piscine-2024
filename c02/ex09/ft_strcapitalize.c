/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:14:33 by bpoisson          #+#    #+#             */
/*   Updated: 2024/02/29 22:35:51 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_char_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	return (1);
}

int	ft_char_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		if (ft_char_is_alphanum(str[j]) && (!ft_char_is_alphanum(str[i - 1])))
		{
			if (ft_char_is_lowercase(str[j]))
			{
				str[j] = str[j] - 32;
			}
		}
		while (ft_char_is_alphanum(str[j]))
		{
			j++;
			if (ft_char_is_uppercase(str[j]))
			{
				str[j] = str[j] + 32;
			}
		}
		i++;
	}
	return (str);
}
