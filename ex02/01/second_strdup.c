/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_strdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 00:09:37 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/09 00:23:30 by achaprak         ###   ########.fr       */
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
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	char *new = malloc(sizeof(char) * (len + 1));

	while (src[i] != '\0')
	{
		new[i] = src[i];
		++i;
	}
	new[i] = '\0';

	return (new);
}

int		main(void)
{
	char s[] = "Hello world!";
	printf("%s", ft_strdup(s));
	return (0);
}

