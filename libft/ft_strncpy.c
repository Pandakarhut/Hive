/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 17:26:45 by jtian             #+#    #+#             */
/*   Updated: 2020/06/22 17:30:36 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strncpy() function copies at most len characters from src into dst.
** If src is less than len characters long, the remainder of dst is filled
** with `\0' characters.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		while (*src && i < len)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
