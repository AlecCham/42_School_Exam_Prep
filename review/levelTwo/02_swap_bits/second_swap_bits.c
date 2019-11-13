/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_swap_bits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:03:37 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 21:58:52 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(int ac, char **av)
{
	unsigned char a = 200;
	
	printf("Set value is 200 == %d \n", a);
	a = swap_bits(a);
	printf("Should be equal to 140 == %d\n", a);
	return (0);
}
