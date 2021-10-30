/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:32:03 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/19 07:54:02 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	c;

	c = 0;
	if (to_find[c] == '\0')
		return (str);
	a = 0;
	while (str[a])
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return (str + a);
			b++ ;
		}
		a++ ;
	}
	return (0);
}
