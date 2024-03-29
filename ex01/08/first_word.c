/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 00:37:30 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/08 00:51:09 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			argv[1]++;
		while (*argv[1] != '\0' && (*argv[1] != ' ' && *argv[1] != '\t'))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
