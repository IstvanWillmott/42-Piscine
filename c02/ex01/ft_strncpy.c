/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:27:30 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/15 14:30:55 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char	*dest,	char	*src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((src[count] != '\0') && (count < n))
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*
int main(void)
{
	char dest[] = "";
	char src[] = "extreme yeet city";
	char *t;
	unsigned int n;

	n = 4;
	t = ft_strncpy(dest, src, n);
	printf("%s\n", t);
	return (0);
}*/
