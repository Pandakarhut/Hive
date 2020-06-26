/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:37:46 by jtian             #+#    #+#             */
/*   Updated: 2020/06/17 19:14:33 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlcat() appends string src to the end of dst.  It will append at most
** maxlen - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** maxlen is 0 or the original dst string was longer than maxlen. maxlen
** should be the size of the destination string buffer dst plus the space
** for the nul-terminator. Returns the total length of the string it tried
** to create.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len_dst;
    size_t len_src;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (dstsize <= len_dst)
        return (len_src + dstsize);
    else
        ft_strncat(dst, (char*)src, dstsize - len_dst - 1);
    return (len_dst + len_src);   
}
