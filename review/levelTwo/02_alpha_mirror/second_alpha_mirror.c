/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_alpha_mirror.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:37:52 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/13 11:05:05 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'M')
			*str = 'Z' - (*str - 'A');
		else if (*str >= 'a' && *str <= 'm')
			*str = 'z' - (*str - 'A');
		else if (*str >= 'N' && *str <= 'Z')
			*str = 'A' + ('Z' - *str);
		else if (*str >= 'n' && *str <= 'z')
			*str = 'a' + ('z' - *str);
		write(1, str, 1);
		++str;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}
