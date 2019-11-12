/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:32:24 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/11 17:13:26 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot1(char *c)
{
	while (*c)
	{	
		if ((*c >= 'A' && *c <= 'Y') || (*c >= 'a' && *c <= 'y'))
			ft_putchar(*c + 1);
		else if (*c == 'Z' || *c == 'z')
			ft_putchar(*c - 25);
		else
			ft_putchar(*c);
		c++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_rot1(av[1]);
	ft_putchar('\n');
	return (0);
}
