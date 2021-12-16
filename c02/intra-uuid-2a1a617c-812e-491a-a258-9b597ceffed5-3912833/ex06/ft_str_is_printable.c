/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:10:21 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 11:26:54 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	count;
	int	rep;

	count = 0;
	rep = 1;
	while (str[count] != '\0' && rep == 1)
	{
		if (str[count] >= 32 && str[count] <= 126)
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

	str = "DSNDKSdisndf93dwkn@#%$^@#$#";
	ft_str_is_printable(str);
}*/
