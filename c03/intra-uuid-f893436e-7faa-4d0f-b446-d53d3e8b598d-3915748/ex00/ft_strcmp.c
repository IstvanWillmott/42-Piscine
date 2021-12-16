/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:39:09 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/08 12:02:53 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
		count++;
	return (s1[count] - s2[count]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("aaab", "aaab"));
	return (0);
}*/
