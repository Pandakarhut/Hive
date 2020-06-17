/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 18:05:20 by jtian             #+#    #+#             */
/*   Updated: 2020/06/17 18:36:16 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strncat() function appends a copy of the null-terminated string s2
** to the end of the null-terminated string s1. The ft_strncat() function
** appends not more than n characters from s2, and then adds a terminating
** '\0'.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
