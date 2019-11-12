/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:51:56 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 00:10:19 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	//verify number of passed parameters
	if ( ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	//verify if second and thrid parameters are one char string
	if (av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}

	// look for match of second parameter in the 1st in order to replace by 3rd
	i = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		write(1, &av[1][i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}
