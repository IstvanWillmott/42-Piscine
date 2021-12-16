/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:37:09 by iwillmot          #+#    #+#             */
/*   Updated: 2021/11/29 13:54:28 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	frontedit(char front[], char back[])
{
	front[1]++;
	if (front[1] > '9')
	{
		front[1] = '0';
		front[0]++;
	}
	back[0] = front[0];
	back[1] = front[1];
	if (front[0] == back[0] || front[1] == back[1])
		back[1]++;
}

void	backedit(char front[], char back[])
{
	while (front[0] <= '9')
	{
		while (back[0] <= '9')
		{
			while (back[1] <= '9')
			{
				write(1, &front[0], 1);
				write(1, &front[1], 1);
				write(1, " ", 1);
				write(1, &back[0], 1);
				write(1, &back[1], 1);
				if (front[0] != '9' || front[1] != '8')
					write(1, ", ", 2);
				back[1]++;
			}
			back[1] = '0';
			back[0]++;
		}
		frontedit(front, back);
	}
}

void	ft_print_comb2(void)
{
	char	front[2];
	char	back[2];

	front[0] = '0';
	front[1] = '0';
	back[0] = '0';
	back[1] = '1';
	backedit(front, back);
}
