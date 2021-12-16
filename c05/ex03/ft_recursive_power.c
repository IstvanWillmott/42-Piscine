/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:47:09 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/13 18:29:08 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		nb = 0;
	else if (power == 0)
		nb = 1;
	else
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int	p;

	nb = 6;
	p = 1;
	ft_recursive_power(nb, p);
	return (0);
}*/
