/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 08:16:07 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/17 14:46:44 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0 ;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++ ;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++ ;
	}
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	ft_strncpy(dest, src, size - 1);
	return (ft_strlen(src));
}
