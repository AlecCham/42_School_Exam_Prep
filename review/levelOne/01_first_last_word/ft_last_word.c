/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:06:14 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/11 21:05:00 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (ft_isblank(*av[1]))
			av[1]--;
		while (*av[1] && !ft_isblank(*av[1]))
			av[1]--;
		av[1]++;
		while (*av[1] && !ft_isblank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
