/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:47:23 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/06 19:41:35 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*argv[1])
		{
			write(1, argv[1]++, 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
