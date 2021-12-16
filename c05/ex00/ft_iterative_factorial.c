/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:05:17 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/14 15:06:20 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	count = nb - 1;
	while (count != 1)
	{
		nb *= count;
		count--;
	}
	return (nb);
}
/*
int	main(void)
{
	ft_iterative_factorial(3);
	return (0);
}*/
