/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:28:47 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 11:30:04 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
			str[count] += 32;
		count++;
	}
	return (str);
}
/*
int main(void)
{
	char	str[15] = "jSneJhuDEHJS$2";

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}*/
