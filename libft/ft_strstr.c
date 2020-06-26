/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:25:39 by jtian             #+#    #+#             */
/*   Updated: 2020/06/22 16:25:44 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** The strstr() function locates the first occurrence of the null-terminated 
** string needle in the null-terminated string haystack.
*/

char    *ft_strstr(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (*(s2 + i) != *(s1 + i))
    {
        if (*(s2 + i) != *(s1 + i))
        {
            s1++;
            i = 0;
        }
        else
            i++;
    }
    if (*(s2 + i) == '\0')
        return (s1);
    return (0);
}