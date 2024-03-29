/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:18:57 by bpoisson          #+#    #+#             */
/*   Updated: 2024/02/29 17:02:35 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= ft_strlen(src))
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (n > ft_strlen(src))
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < ft_strlen(dest))
		{
			dest[i] = 0;
			i++;
		}
	}
	return (dest);
}
