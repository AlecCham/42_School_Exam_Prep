/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:41:45 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/13 14:35:06 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int max = tab[0];
	unsigned int i = 1;

	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		++i;
	}
	return (max);
}
int main(void)
{
	int tab[] = { -10, -123, -10, -12, -8, 2, 20, 900 };
	printf("%d\n", max( tab, sizeof(tab)/sizeof(*tab) ) );
}
