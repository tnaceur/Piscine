/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:28:43 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/16 18:10:09 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a ;

	a = 0;
	while (str[a])
	{
		if (!(str[a] >= 'A' && str[a] <= 'Z'))
			return (0);
		a++ ;
	}
	return (1);
}
