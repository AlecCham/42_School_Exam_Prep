/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:50:04 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/12 15:22:30 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	char *new = malloc(sizeof(char) * (len + 1));
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int		main(int ac, char **av)
{
	int len;

	len = 0;
	if (ac == 2)
		len = ft_strlen(av[1]);
		printf("%s \n", ft_strdup(av[1]));
	printf(" %d \n", len);
	return (0);
}

