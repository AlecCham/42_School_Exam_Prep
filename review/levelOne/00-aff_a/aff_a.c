/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:29:27 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/09 12:31:41 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'a')
		{
			write(1, "a", 1);
		}
		++str;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	else
		write(1, "a\n", 2);

	return (0);
}
