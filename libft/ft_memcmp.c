/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:25:27 by jtian             #+#    #+#             */
/*   Updated: 2020/06/29 18:54:07 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcmp() function compares byte string s1 against byte string s2. Both
** strings are assumed to be n bytes long. Returns 0 if the first two strings
** are identical, otherwise returns the difference between the first two bytes
** (treated as unsigned char values). Zero-length strings are always identical.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s1_b;
	unsigned char *s2_b;

	i = 0;
	s1_b = (unsigned char*)s1;
	s2_b = (unsigned char*)s2;
	while (n--)
	{
		if (s1_b[i] != s2_b[i])
			return (s1_b[i] - s2_b[i]);
		i++;
	}
	return (0);
}
