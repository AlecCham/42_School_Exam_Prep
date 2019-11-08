/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_search_and_replace.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:27:40 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/07 16:39:19 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char target, char replacement)
{
	while (*str != '\0')
	{
		if (*str == target)
			write(1, &replacement, 1);
		else
			write(1, str, 1);
		++str;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
