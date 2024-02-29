/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:14:33 by bpoisson          #+#    #+#             */
/*   Updated: 2024/02/29 19:28:15 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

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

	i = 0;
	while (str[i] != '\0')
	{
		if ()
		{
			
		}
	}
}

int	main(void)
{

}
