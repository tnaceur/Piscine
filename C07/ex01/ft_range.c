/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:01:50 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/25 18:11:58 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		min++ ;
		i++ ;
	}
	return (ptr);
}
