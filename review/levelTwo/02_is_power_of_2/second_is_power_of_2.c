/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_is_power_of_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:13:38 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/14 13:18:44 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int power = 1;

	while (power < n)
		power = 2 * power;
	if (power == n)
		return (1);
	else
		return (0);
}

int		main(void)
{
	unsigned int a = 32;

	printf("%d \n", is_power_of_2(a));
}

