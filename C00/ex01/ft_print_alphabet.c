/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:26:19 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/08 16:26:24 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print_alphabet(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{	
		write(1, &c, 1);
		c++ ;
	}
}