/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 02:10:49 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/08 14:10:11 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	name = argv[0];
	if (argc < 1)
		return (1);
	while (*name)
	{
		write(1, &*name, 1);
		name++;
	}
	write(1, "\n", 1);
	return (0);
}
