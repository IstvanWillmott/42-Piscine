/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:53:12 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 11:24:38 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	count;
	int	ret;

	count = 0;
	ret = 1;
	while (str[count] != '\0' && ret == 1)
	{
		if (str[count] >= 97 && str[count] <= 122)
			count++;
		else if (str[count] >= 65 && str[count] <= 90)
			count++;
		else
			ret = 0;
	}
	return (ret);
}
/*
int main(void)
{
	char *test1;

	test1 = "yeetsismalday";
	ft_str_is_alpha(test1);
	return (0);
}*/
