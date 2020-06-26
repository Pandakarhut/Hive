/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:00:17 by jtian             #+#    #+#             */
/*   Updated: 2020/06/22 15:00:33 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strchr() function locates the first occurrence of c (converted to a char) 
** in the string pointed to by s.The terminating null character is considered to 
** be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.
*/

char    *ft_strchr(const char *s, int c)
{
    while ((*s) && (*s) != c)
        s++;
    if ((*s) == c)
        return ((char*)s);
    return (NULL);
}