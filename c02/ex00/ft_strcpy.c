/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:58:54 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/06 19:03:43 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int main(void)
{
	char *src;
	char dest[0];
	char *t;
	
	src = "big yeets all day legend";
	printf("%s\n", src);
	t = ft_strcpy(dest, src);
	printf("%s\n", t);
	return (0);
}*/
