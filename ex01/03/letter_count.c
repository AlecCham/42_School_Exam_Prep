/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:38:03 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/07 10:42:10 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		letter_count(char c)
{
	int	repeat;

	if (c >= 65 && c <= 90)
		repeat = c - 65;
	else if (c >= 97 && c <= 122)
		repeat = c - 97;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = letter_count(*av[1]);
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
