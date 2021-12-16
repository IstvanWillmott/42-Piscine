/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:25:55 by iwillmot          #+#    #+#             */
/*   Updated: 2021/11/29 13:59:48 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	under;
	char	over;

	under = 'N';
	over = 'P';
	if (n < 0)
	{
		write(1, &under, 1);
	}
	else
	{
		write(1, &over, 1);
	}
}
