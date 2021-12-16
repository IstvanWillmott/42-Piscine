/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:46:28 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 11:25:01 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	count;
	int	rep;

	count = 0;
	rep = 1;
	while (str[count] != '\0' && rep == 1)
	{
		if (str[count] >= 97 && str[count] <= 122)
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

	str = "sdnajsdkdndfnjdf";
	ft_str_is_lowercase(str);
}*/
