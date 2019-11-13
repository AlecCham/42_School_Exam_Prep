/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:39:31 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 13:57:19 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *s)
{
	int sign;
	long result;

	sign = 1;
	result = 0;
	while (*s == 32 || (*s >= 9 && *s <= 13))
			s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (sign * result);
}

int		main(void)
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf(" %d \n", ft_atoi(a));
}
