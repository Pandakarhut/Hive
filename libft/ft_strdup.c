/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:45:43 by jtian             #+#    #+#             */
/*   Updated: 2020/06/15 19:59:05 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may subsequently
** be used as an argument to the function free(3). If insufficient memory is
** available, NULL is returned and errno is set to ENOMEM.
*/

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	while(s1[i])
		i++;
	if (!(dup = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (si[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
