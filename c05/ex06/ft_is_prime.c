/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:12:15 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/13 12:23:13 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	c;
	int	flag;

	i = 2;
	c = nb / 2;
	flag = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= c)
	{
		if (nb % i == 0)
		{
			flag = 0;
			break ;
		}
		i++;
	}
	if (flag == 1)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 0;
	ft_is_prime(nb);
}*/
