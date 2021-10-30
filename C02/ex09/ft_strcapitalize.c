/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:00:49 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/16 17:37:44 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (!(((str[a - 1] >= 'A' && str[a - 1] <= 'Z')
					|| (str[a - 1] >= '0' && str[a - 1] <= '9'))
				|| (str[a - 1] >= 'a' && str[a - 1] <= 'z')))
		{
			if (str[a] >= 'a' && str[a] <= 'z')
				str[a] -= 32;
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		a++ ;
	}
	return (str);
}
