/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:45:19 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/15 15:10:14 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ret;

	i = 0;
	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	ret = malloc(4 * (max - min));
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	*range = ret;
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	sizeofrange;
	int	a;
	int	b;

	a = -9;
	b = 32;
	sizeofrange = ft_ultimate_range(&range, a, b);
	printf("%d\n", sizeofrange);
}*/
