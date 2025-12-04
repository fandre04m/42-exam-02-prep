/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fandre-m <fandre-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:52:44 by fandre-m          #+#    #+#             */
/*   Updated: 2025/12/04 17:20:18 by fandre-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	not_repeated(char *s, int max_pos, char c)
{
	int	i = 0;

	while (i < max_pos)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		int	i = 0, j = 0;

		while (av[1][i])
		{
			if (not_repeated(av[1], i, av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if (not_repeated(av[1], i, av[2][j]) && not_repeated(av[2], j, av[2][j]))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
