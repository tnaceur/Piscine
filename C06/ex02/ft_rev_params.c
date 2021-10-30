/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:38:49 by tnaceur           #+#    #+#             */
/*   Updated: 2021/08/20 07:03:58 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++ ;
	}
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		argc-- ;
		write(1, "\n", 1);
	}
	return (0);
}
