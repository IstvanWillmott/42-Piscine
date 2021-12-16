/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:55:05 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 11:24:51 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	count;
	int	ret;

	count = 0;
	ret = 1;
	while (str[count] != '\0' && ret == 1)
	{
		if (str[count] >= 48 && str[count] <= 57)
			count++;
		else
			ret = 0;
	}
	return (ret);
}
/*
int main(void)
{
	char *test;

	test = "38438272";
	ft_str_is_numeric(test);
	return (0);
}*/
