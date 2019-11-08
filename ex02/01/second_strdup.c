/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_strdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:08:09 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/08 14:24:41 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	ft_strdup(char *src)
{
	char *s;
	int len;

	while (src[len])
	{
		len++;
	}
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	while (s[len] >= 0)
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}

int		main(void)
{
	char b[] = "hello world";
	printf("%s \n", ft_strdup(b));
	return (0);
}


