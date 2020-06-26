/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:19:19 by jtian             #+#    #+#             */
/*   Updated: 2020/06/26 18:25:28 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strrchr() function locates the last occurrence of c (converted to a
** char) in the string pointed to by s. The terminating null character is
** considered to be part of the string; therefore if c is '\0', the functions
** locate the terminating '\0'. Returns a pointer to the located character,
** or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = ft_strlen((char*)s);
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char*)s[i]);
	return (NULL);
}