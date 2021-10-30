/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 07:40:27 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/25 18:01:58 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*ptr;

	i = 0;
	l = 0;
	while (src[l])
		l++ ;
	ptr = (char *)malloc((l + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++ ;
	}
	ptr[i] = '\0';
	return (ptr);
}
