/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:33:10 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 20:45:52 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_double_check_from_second(char *str, int letter)
{
	int	i;
	int	is_true;
	int	index;

	i = 0;
	is_true = 1;
	index = 0;
	while (index < letter)
	{
		if (str[index] ==  str[letter])
		{	
			is_true = 0;
			return (is_true);
		}
		else
		{
			index++;
		}
	}
	return (is_true);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j]  && ft_double_check_from_second(argv[1], i)  && ft_double_check_from_second(argv[2], j))
				{
					write(1, &argv[1][i], 1);
				}
					j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
