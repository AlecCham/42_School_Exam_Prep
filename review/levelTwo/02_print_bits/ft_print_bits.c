/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:40:25 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 19:30:24 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 0;
	unsigned char bit;

	while (i < 8)
	{	
		bit = (octet << i) & 0x80;
		if (bit != 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	
	print_bits(2);
	return (0);
}
