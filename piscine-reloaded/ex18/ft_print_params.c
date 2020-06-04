/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 15:37:25 by jtian             #+#    #+#             */
/*   Updated: 2020/06/04 17:04:00 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	while (a < argc)
	{
		while (*argv[a])
			ft_putchar(*argv[a]++);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
