/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:43:48 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/01 11:04:13 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int	*div, int	*mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 2332;
	b = 352;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
}*/
