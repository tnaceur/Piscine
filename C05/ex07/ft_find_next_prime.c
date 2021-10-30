/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:55:22 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/23 18:39:50 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++ ;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++ ;
	}
	return (nb);
}
