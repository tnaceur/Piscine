/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 07:34:50 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/24 11:40:53 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	print_argument(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++ ;
		}
		j++ ;
		write (1, "\n", 1);
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while ((s1[a] && s2[a]) && (s1[a] == s2[a]))
		a++ ;
	return (s1[a] - s2[a]);
}

int	main(int	argc, char **argv)
{
	int		i;
	int		j;
	char	*s;

	i = 1;
	while (argc > i)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				s = argv[i];
				argv[i] = argv[j];
				argv[j] = s;
			}
			j++ ;
		}
		i++ ;
	}
	print_argument(argc, argv);
}
