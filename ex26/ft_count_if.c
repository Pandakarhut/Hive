/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <jtian@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:30:01 by jtian             #+#    #+#             */
/*   Updated: 2020/06/04 16:30:58 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	value;
	int	i;

	value = 0;
	i = 0;
	while (tab[i])
	{
		value += f(tab[i]);
		i++;
	}
	return (value);
}