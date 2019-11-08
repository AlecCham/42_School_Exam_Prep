/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_letter_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:54:11 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/07 12:59:07 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char c)
{
	int repeat;

	if (c >= 65 && c <= 90)
		repeat = c - 65 + 1;
	else if (c >= 97 && c <= 122)
		repeat = c - 97 + 1;
	else
		repeat = 1;
	return (repeat);
}
int		main(int argc, char **argv)
{
	int repeat;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	write(1, "\n", 1);
	return (0);
}
