/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_matt_alpha.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 00:09:32 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/07 00:23:11 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_reverse_matt_alpha(void)
{
	int i;

	i = 123;
	while (i-- > 97)
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i - 32);
	ft_putchar('\n');
}

int		main(void)
{
	ft_reverse_matt_alpha();
	return (0);
}
