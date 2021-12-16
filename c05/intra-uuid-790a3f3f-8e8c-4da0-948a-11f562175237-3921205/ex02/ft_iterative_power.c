/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:12:58 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/12 18:06:49 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	d;

	c = 1;
	d = nb;
	if (power < 0)
		nb = 0;
	if (power == 0)
		nb = 1;
	else
	{
		while (c < power)
		{
			nb = d * nb;
			c++;
		}
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 0;
	ft_iterative_power(nb, power);
	return (0);
}*/
