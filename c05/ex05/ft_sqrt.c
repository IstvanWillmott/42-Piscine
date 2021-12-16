/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:42:23 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/15 20:07:20 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	calc;
	int	res;
	int	up;

	res = nb;
	calc = 1;
	up = 0;
	if (nb < 0)
		return (0);
	while (res > 0)
	{
		res = res - calc;
		calc += 2;
		up++;
	}
	if (res == 0)
	{
		return (up);
	}
	else
		return (0);
}
/*
int	main(void)
{
	int	nb;
	int	t;

	nb = 46340;
	t = ft_sqrt(nb);
	printf("%d\n", t);
	return (0);
}*/
