/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:47:25 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/15 17:47:24 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	find_size(int size, char	**strs, char	*sep)
{
	int	sep_size;
	int	total_size;
	int	i;
	int	k;

	sep_size = 0;
	while (sep[sep_size])
		sep_size++;
	total_size = 1;
	if (size > 1)
		total_size += (size - 1) * sep_size;
	k = 1;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
			i++;
		total_size += i;
		k++;
	}
	return (total_size);
}

char	*combine(char	*src, char	*dst)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (&dst[i]);
}

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	int		i;
	char	*str;
	char	*p;

	if (size == 0)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	str = malloc(find_size(size, strs, sep));
	i = 0;
	p = combine(strs[0], str);
	while (++i < size)
	{
		p = combine(sep, p);
		p = combine(strs[i], p);
	}
	*(++p) = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "yeet";
	char	str2[] = "city";
	char	str3[] = "boah";
	char	str4[] = "eskediieeettt";
	char	sep[] = "--";

	char	*strs[4] = { str1, str2, str3, str4 };
	char	*result = ft_strjoin(4, strs, sep);
	printf("String 1 is: %s\n", str1);
	printf("String 2 is: %s\n", str2);
	printf("String 3 is: %s\n", str3);
	printf("String 4 is: %s\n", str4);
	printf("The big string is: %s\n", result);
	return (0);
}*/
