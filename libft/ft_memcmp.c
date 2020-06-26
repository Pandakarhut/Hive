/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:25:27 by jtian             #+#    #+#             */
/*   Updated: 2020/06/26 17:53:07 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcmp() function compares byte string s1 against byte string s2. Both
** strings are assumed to be n bytes long. Returns 0 if the first two strings
** are identical, otherwise returns the difference between the first two bytes
** (treated as unsigned char values). Zero-length strings are always identical.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
    {
        if (*(unsigned char*)s1) != ((unsigned char*)s2))
            return (*(unsigned char*)s1) - *((unsigned char*)s2));
            s1++;
            s2++;
    }
    return (0);
}
