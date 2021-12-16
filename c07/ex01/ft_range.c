/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:10:08 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/15 15:08:38 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc(4 * (max - min));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = -13;
	b = 23;
	ft_range(a, b);
	return (0);
}*/
