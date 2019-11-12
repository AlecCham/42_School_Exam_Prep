/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:50:09 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/11 13:33:11 by achaprak         ###   ########.fr       */
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
	printf("%d  %d\n", *a, *b);
}

int		main(void)
{
	int c;
	int d;
	
	int *a = &c;
	int *b = &d;
	*a = 10;
	*b = 100;
	ft_swap(a, b);
	return (0);
}
