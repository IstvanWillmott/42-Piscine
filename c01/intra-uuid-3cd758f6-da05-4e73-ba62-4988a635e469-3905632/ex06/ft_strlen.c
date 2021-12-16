/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:49:40 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/01 11:04:36 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
int	main(void)
{
	char	string[] = "big dog";
	ft_strlen(string);
	return (0);
}*/
