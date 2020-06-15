/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:59:18 by jtian             #+#    #+#             */
/*   Updated: 2020/06/15 20:03:23 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strcpy() function copies the string src to dst (including
** the terminating `\0' character.)
*/

char	*ft_strcpy(char *dst, const char *src)
{
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	dst = '\0';
	return (dst);
}
