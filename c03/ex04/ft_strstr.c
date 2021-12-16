/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:21:05 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/07 16:21:30 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	if (to_find[s] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[s])
		{
			s++;
			if (to_find[s] == '\0')
				return (&str[i - s + 1]);
		}
		else if (s != 0)
			s = 0;
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char *haystack = "ye will never find me";
	char *needle = "find";

	printf("%s\n", ft_strstr(haystack, needle));
	return (0);
}*/
