/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:15:15 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/07 18:26:29 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	char c;
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			c = str[i] + 32;
		else if (str[i] >= 97 && str[i] <= 122)
			c = str[i] - 32;
		else
			c = str[i];

		write(1, &c, 1);
		++i;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);

	write(1, "\n", 1);
	return (0);
}
