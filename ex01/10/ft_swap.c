/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 01:57:28 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/08 10:14:33 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	printf("%d     %d", *a, *b);
}

int		main(void)
{
	int c;
	int d;

	int *a = &c;
	int *b = &d;
	*a = 1;
	*b = 10;
	ft_swap(a, b);
	return (0);
}
