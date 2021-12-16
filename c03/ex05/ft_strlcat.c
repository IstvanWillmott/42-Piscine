/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:46:41 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/08 11:52:38 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	int				end;
	int				app;
	unsigned int	sz;
	unsigned int	count;

	sz = 0;
	end = 0;
	app = 0;
	count = 0;
	while (dest[end] != '\0')
		end++;
	while (src[app] != '\0' && sz != size)
	{
		dest[end + app] = src[app];
		app++;
		sz++;
	}
	dest[end + app] = '\0';
	while (dest[count] != '\0')
		count++;
	return (count);
}
/*
int	main(void)
{
	char	*src;
	char	dest[5] = "nice";
	int t;

	src = "sgan braz";
	ft_strlcat(dest, src, 1);
	t = strlcat("nice", "sganbraz", 1);
	printf("%d\n", t);
	//printf("%s\n", dest);
}*/
