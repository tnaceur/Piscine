/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:31:05 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/25 18:10:51 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (ptr == NULL)
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		min++ ;
		i++ ;
	}
	*range = ptr;
	return (i);
}
