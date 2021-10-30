/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:27:59 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/08 16:28:10 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' ;
	while (a <= '7')
	{
		b = a + 1 ;
		while (b <= '8')
		{
			c = b + 1 ;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
					write(1, ", ", 2);
				c++ ;
			}
			b++ ;
		}
		a++ ;
	}
}
