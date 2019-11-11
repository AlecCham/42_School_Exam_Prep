/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:22:43 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/11 12:39:02 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{;
	if (argc == 2)
		ft_strlen(argv[1]);
	printf("Len of the passed string parameter is %i\n", ft_strlen(argv[1]));
	return (0);
}
