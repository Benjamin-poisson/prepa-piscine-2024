/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoisson <bpoisson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:15:12 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/12 22:50:23 by bpoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define SUCCESS 0
# define ODD_MSG "I have an odd number of arguments."
# define EVEN_MSG "I have an even number of arguments."
# define TRUE 1
# define FALSE 0
# define EVEN(n) !(n % 2)

typedef int	t_bool;

#endif
