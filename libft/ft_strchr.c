/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 18:30:38 by jtian             #+#    #+#             */
/*   Updated: 2020/06/29 18:30:41 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strchr() function locates the first occurrence of c (converted to a char)
** in the string pointed to by s.The terminating null character is considered
** to be part of the string; therefore if c is `\0', the functions locate
** the terminating `\0'.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s) && (*s) != c)
		s++;
	if ((*s) == c)
		return ((char*)s);
	return (NULL);
}
