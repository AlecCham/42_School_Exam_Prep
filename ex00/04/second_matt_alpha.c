/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_matt_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 23:22:45 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/06 23:37:27 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_matt_alpha(void)
{
	int i;

	i = 64;
	while (i++ < 90)
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i + 32);
	ft_putchar('\n');
}

int		main(void)
{
	ft_matt_alpha();
	return (0);
}
