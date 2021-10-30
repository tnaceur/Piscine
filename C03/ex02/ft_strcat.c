/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:38:25 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/18 18:30:56 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++ ;
	while (src[b])
	{
		dest[a + b] = src[b];
		b++ ;
	}
	dest[a + b] = '\0';
	return (dest);
}
