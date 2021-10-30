/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:35:50 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/12 13:04:02 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	a ;
	int	swap ;

	a = 0 ;
	size = size - 1 ;
	while (a < size)
	{
		swap = tab[a];
		tab[a] = tab[size];
		tab[size] = swap ;
		a++ ;
		size-- ;
	}
}
