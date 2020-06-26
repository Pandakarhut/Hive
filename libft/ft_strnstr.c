/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:36:42 by jtian             #+#    #+#             */
/*   Updated: 2020/06/26 18:28:24 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strnstr() function locates the first occurrence of the null
** -terminated string needle in the null-terminated string haystack, where not
** more than len characters are searched. Characters after the '\0' are not
** searched. If needle is an empty string, haystack is returned; if needle
** occurs nowhere in haystack, NULL is returned; otherwise a pointer to the
** first character of the first occurrence of needle is returned.
*/

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
     size_t len2;

     if (*s2 == '\0')
        return ((char*)s1);
    len2 = ft_strlen(s2);
    while (*s1 != '\0' && n-- >= len2)
    {
        if (*s1 == *s2 && ft_memcmp(s1, s2, len2) == 0)
            return ((char*)s1);
        s1++;
    }
    return (NULL);
}

