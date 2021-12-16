/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:43:27 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/11 14:18:52 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		c;
	char	*str;

	c = argc - 1;
	while (c >= 1 && argc != 1)
	{
		str = argv[c];
		ft_rev_params(str);
		c--;
	}
	return (0);
}
