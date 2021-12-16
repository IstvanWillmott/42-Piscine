/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:02:33 by iwillmot          #+#    #+#             */
/*   Updated: 2021/11/30 13:03:27 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int countx, int x)
{
	while (countx <= x)
	{
		if (countx == 1)
			ft_putchar('A');
		else if (countx == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		countx++;
	}
}

void	bot(int countx, int x)
{
	while (countx <= x)
	{
		if (countx == 1)
			ft_putchar('C');
		else if (countx == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		countx++;
	}
}

void	mid(int countx, int x)
{
	while (countx <= x)
	{
		if (countx == 1 || countx == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		countx++;
	}
}

void	rush(int x, int y)
{
	int		countx;
	int		county;

	countx = 1;
	county = 1;
	while (county <= y)
	{
		if (county == 1)
			top(countx, x);
		else if (county == y)
			bot(countx, x);
		else
			mid(countx, x);
		county++;
		ft_putchar('\n');
	}
}
