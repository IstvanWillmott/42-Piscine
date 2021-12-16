/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:53:48 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/01 11:04:21 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tempa;
	int	tempb;

	tempa = (*a / *b);
	tempb = (*a % *b);
	*a = tempa;
	*b = tempb;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 11;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
}*/
