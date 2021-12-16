/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:55:33 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/09 12:33:38 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	cur_sign(char	*str)
{
	int	sign;
	int	count;

	sign = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '-' || str[count] == '+')
		{
			if (str[count] == '-')
				sign *= -1;
		}
		else if (str[count] >= '0' && str[count] <= '9')
			break ;
		else if (str[count] != '\t' && str[count] != '\n' && str[count] != '\v'
			&& str[count] != '\f' && str[count] != '\r' && str[count] != ' ')
		{
			sign = 0;
			break ;
		}
		str++;
	}
	return (sign);
}

int	cur_num(char	*str)
{
	int	num;
	int	count;
	int	check;

	num = 0;
	check = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			num = num * 10 + (str[count] - '0');
			check = 0;
		}
		else
		{
			if (check == 0)
				break ;
		}
		count++;
	}
	return (num);
}

int	ft_atoi(char	*str)
{
	int	ret;

	ret = cur_sign(str) * cur_num(str);
	return (ret);
}
/*
int	main(void)
{
	printf("1. %d\n", ft_atoi("   +----+----+++-23832j sb218"));
	printf("2. %d\n", ft_atoi("           ---18"));
	printf("3. %d\n", ft_atoi("---+--++-----97++232#$%"));
	printf("4. %d\n", ft_atoi("$%#$%!dfs---+++2+---"));
	printf("5. %d\n", ft_atoi("   +--"));
	return (0);
}*/
