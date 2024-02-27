/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:18:57 by bpoisson          #+#    #+#             */
/*   Updated: 2024/02/27 18:26:31 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
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
	unsigned int	size_src;
	unsigned int	size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	i = 0;

	if (n < size_src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (n > size_src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < size_dest)
		{
			dest[i] = '@';
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

int main(void)
{
	char bonjour[5] = "haled";
	char aurevoir[10] = "tuditnimpo";
	int i = 0;
	ft_strncpy(aurevoir, bonjour, 7);
	while (i < 5)
	{
		write(1, &bonjour[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while (i < 10)
	{
		write(1, &aurevoir[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
