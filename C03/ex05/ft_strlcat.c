/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:45:52 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/18 18:10:18 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++ ;
	while (src[j])
		j++ ;
	if (size <= i)
		j += size;
	else
		j += i;
	while (src[k] && (i + 1) < size)
	{
		dest[i] = src[k];
		i++ ;
		k++ ;
	}
	dest[i] = '\0';
	return (j);
}
