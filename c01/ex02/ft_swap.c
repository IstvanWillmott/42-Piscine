/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:35:40 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 13:10:25 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 32;
	printf("%d\n%d\n", a, b);
	ft_swap(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}*/
