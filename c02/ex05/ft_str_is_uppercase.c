/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:58:52 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 11:26:44 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char	*str)
{
	int	count;
	int	rep;

	count = 0;
	rep = 1;
	while (str[count] != '\0' && rep == 1)
	{
		if (str[count] >= 65 && str[count] <= 90)
			count++;
		else
			rep = 0;
	}
	return (rep);
}
/*
int main(void)
{
	char	*str;

	str = "SFKJFJKNDF";
	ft_str_is_uppercase(str);
}*/
