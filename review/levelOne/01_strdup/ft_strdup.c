/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 01:27:46 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 01:40:00 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src);
	char *new = malloc(sizeof(char) * (len + 1));

	while (src[i] != '\0')
	{
		new[i] = src[i];
		++i;
	}
	new[i] = '\0';
	return (new);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%s \n", ft_strdup(av[1]));
	return (0);
}
