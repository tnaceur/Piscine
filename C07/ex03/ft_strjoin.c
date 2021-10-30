/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:16:57 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/26 12:35:01 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++ ;
	return (i);
}

char	*ft_string(int	size, char	**strs, char	*sep)
{
	char	*str;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++ ;
	}
	l += ft_strlen(sep) * (size - 1) + 1;
	if (size <= 0)
		l = 1;
	str = (char *)malloc(sizeof(char) * l);
	if (!(str))
		return (0);
	return (str);
}

void	ft_strcpy(char *strs, char *string, int *a)
{
	int	j;

	j = 0;
	while (strs[j])
	{
		string[*a] = strs[j];
		*a += 1;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;
	char	*string;

	i = 0;
	a = 0;
	string = ft_string(size, strs, sep);
	while (i < size)
	{
		ft_strcpy(strs[i], string, &a);
		j = 0;
		while (sep[j] && i != size - 1)
		{
			string[a++] = sep[j];
			j++;
		}
		i++ ;
	}
	string[a] = '\0';
	return (string);
}
