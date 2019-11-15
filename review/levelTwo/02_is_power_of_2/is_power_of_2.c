/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 08:10:59 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/14 08:41:46 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned long power = 1;

	while (power < n)
		power = 2 * power;

	if (power == n)
		return (1);
	else
		return (0);
}

int	main(void)
{
	unsigned int n = 4294967295;
	printf("Is %u a power of 2? %d\n", n, is_power_of_2(n));
}
