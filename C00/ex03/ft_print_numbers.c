/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:27:05 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/08 16:27:08 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print_numbers(void)
{
	int	k;

	k = '0';
	while (k <= '9')
	{
		write(1, &k, 1);
		k++ ;
	}
}