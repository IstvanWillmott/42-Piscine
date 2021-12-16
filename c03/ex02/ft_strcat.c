/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:58:50 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/07 15:03:59 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	end;
	int	app;

	end = 0;
	app = 0;
	while (dest[end] != '\0')
		end++;
	while (src[app] != '\0')
	{
		dest[end + app] = src[app];
		app++;
	}
	dest[end + app] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[5] = "nice";

	src = "sgan braz";
	ft_strcat(dest, src);
	printf("%s\n", dest);
}*/
