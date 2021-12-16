/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:19:17 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/15 15:08:19 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char	*src)
{
	char	*copy;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	copy = malloc(len + 1);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*src;
	char	*tes;

	src = "yeet";
	tes = ft_strdup(src);
	printf("%s\n", tes);
}*/
