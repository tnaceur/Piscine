/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:12:47 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/12 15:12:49 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	a ;
	int	b ;
	int	swap ;

	b = 0 ;
	size = size - 1 ;
	while (b < size)
	{
		a = 0 ;
		while (a < size)
		{
			if (tab[a] > tab[a + 1])
			{
				swap = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = swap ;
			}
			a++ ;
		}
		b++ ;
	}
}
