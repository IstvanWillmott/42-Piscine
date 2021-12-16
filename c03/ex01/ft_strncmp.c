/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:19:29 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/08 19:09:19 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((count < n) && (s1[count] || s2[count]))
	{
		if (s1[count] != s2[count])
		{
			if (s1[count] > s2[count])
				return (1);
			else
				return (-1);
		}
		else
			count++;
	}
	return (0);
}
/*
int	main(void)
{	
	printf("1. %d\n", ft_strncmp("aaab", "aaaf", 4));
	printf("2. %d\n", ft_strncmp("qwerb", "qwert", 3));
	printf("3. %d\n", ft_strncmp("12345", "1q345", 4));
	printf("4. %d\n", ft_strncmp("!!!!!*", "!!!!!&", 6));
	printf("5. %d\n", ft_strncmp("aaab", "2aab", 0));
	printf("6. %d\n", ft_strncmp("aa2b", "aaab", 3));
	printf("7. %d\n", ft_strncmp("", "", 3));
	printf("8. %d\n", ft_strncmp("aaab", "", 3));
	printf("9. %d\n", ft_strncmp("", "aaab", 3));
	printf("10. %d\n", ft_strncmp("aaab", "", 0));
	printf("11. %d\n", ft_strncmp("", "aaab", 0));
	printf("12. %d\n\n", ft_strncmp("", "", 0));

	printf("1. %d\n", strncmp("aaab", "aaaf", 4));
	printf("2. %d\n", strncmp("qwerb", "qwert", 3));
	printf("3. %d\n", strncmp("12345", "1q345", 4));
	printf("4. %d\n", strncmp("!!!!!*", "!!!!!&", 6));
	printf("5. %d\n", strncmp("aaab", "2aab", 0));
	printf("6. %d\n", strncmp("aa2b", "aaab", 3));
	printf("7. %d\n", strncmp("", "", 3));
	printf("8. %d\n", strncmp("aaab", "", 3));
	printf("9. %d\n", strncmp("", "aaab", 3));
	printf("10. %d\n", strncmp("aaab", "", 0));
	printf("11. %d\n", strncmp("", "aaab", 0));
	printf("12. %d\n", strncmp("", "", 0));
	return (0);
}*/
