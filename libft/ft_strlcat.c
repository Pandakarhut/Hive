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

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{

}
