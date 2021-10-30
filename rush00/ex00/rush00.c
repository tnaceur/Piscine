/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:12:08 by ooulmyr           #+#    #+#             */
/*   Updated: 2021/08/09 09:18:03 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	rush(int a,	int b)
{
	int	cpta;
	int	cptb;

	cpta = a;
	cptb = b;
	while (b > 0)
	{
		while (a > 0)
		{
			if ((a == cpta && b == cptb) || (a == 1 && b == cptb))
				ft_putchar('o');
			else if ((a == cpta && b == 1) || (a == 1 && b == 1))
				ft_putchar('o');
			else if (a == cpta || a == 1)
				ft_putchar('|');
			 else if (b == cptb || b == 1)
				 ft_putchar('-');
			 else
				ft_putchar(' ');
			a--;
		}
		ft_putchar('\n');
		b-- ;
		a = cpta;
	}
}
