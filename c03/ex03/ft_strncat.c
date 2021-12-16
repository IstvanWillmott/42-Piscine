/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:10:24 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/13 21:41:05 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	end;
	unsigned int	app;

	end = 0;
	app = 0;
	while (dest[end] != '\0')
		end++;
	while (src[app] != '\0' && app != nb)
	{
		dest[end + app] = src[app];
		app++;
	}
	dest[end + app] = '\0';
	return (dest);
}
/*
int main(void)
{
	char	*src;
	char dest[5] = "nice";

	src = "sgano braz";
	ft_strncat(dest, src, 5);
	printf("%s\n", dest);
}*/
