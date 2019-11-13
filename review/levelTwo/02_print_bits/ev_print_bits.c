/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ev_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:25:17 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 19:25:35 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int shift = 7;
	unsigned char mask = 1;
	char out;

	while (shift >= 0)
	{
		out = ((octet >> shift) & mask) + '0';
		write(1, &out, 1);
		--shift;
	}
}

int		main(void)
{
	print_bits(2);
	write(1, "\n", 1);
}
