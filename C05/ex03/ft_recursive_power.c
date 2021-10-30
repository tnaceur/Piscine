/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:12:15 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/23 12:38:34 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0) || (power == 0 && nb == 0))
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
