/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:44:32 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/12 17:09:06 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		nb = nb * (ft_recursive_factorial(nb - 1));
	return (nb);
}
/*
int	main(void)
{
	ft_recursive_factorial(8);
	return (0);
}*/
