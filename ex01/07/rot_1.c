/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:52:44 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/07 23:05:07 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rot_1(char c)
{
	if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'Y'))
		c += 1;
	else if ((c == 'Z') || (c == 'z'))
		c -= 25;
	return (c);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		while (*argv[1])
			ft_putchar(rot_1(*argv[1]++));
	ft_putchar('\n');
	return (0);
}
