

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fandre-m <fandre-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:59:11 by fandre-m          #+#    #+#             */
/*   Updated: 2025/12/04 12:18:22 by fandre-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"

unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int temp;
	
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	div;

	if (a <= 0 || b <= 0)
		return (0);
	div = hcf(a, b);
	div = a / div * b;
	return (div);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		unsigned int a = atoi(av[1]), b = atoi(av[2]);

		printf("LCM: %u", lcm(a, b));
	}
	else
		printf("Needs 2 args!");
}*/

