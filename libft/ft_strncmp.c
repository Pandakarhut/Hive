/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:29:43 by jtian             #+#    #+#             */
/*   Updated: 2020/06/29 18:32:40 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strncmp() function lexicographically compares the null-terminated
** strings s1 and s2. Returns an integer greater than, equal to, or less than
** 0, according as the string s1 is greater than, equal to, or less than the
** string s2. Compares not more than n characters. The comparison is done
** using unsigned characters, so that '\200' is greater than '\0'.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) && *(s2 + i))
	{
		i++;
		if (i == n)
			return (0);
	}
	return (*(s1 + i) - *(s2 + i));
}
