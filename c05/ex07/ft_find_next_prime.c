/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:12:15 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/13 12:19:45 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	c;

	i = 2;
	if (nb == 0)
		nb += 2;
	if (nb == 1)
		nb++;
	c = nb / 2;
	while (i <= c)
	{
		if (nb % i == 0)
		{
			nb++;
			c = nb / 2;
			i = 2;
		}
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;

	nb = 246;
	ft_find_next_prime(nb);
}*/
