/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:31:15 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 11:27:06 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] -= 32;
		count++;
	}
	return (str);
}
/*
int main(void)
{
	char	str[15] = "dsfsSMjd78$@#n";

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/
