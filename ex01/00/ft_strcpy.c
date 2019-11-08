/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 02:00:34 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/07 02:29:31 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

int		main(void)
{
	char str1[] = "Guavihjkho";
	char str2[] = "Flaviojhfghjk";

	printf("%s \n", str1);
	ft_strcpy(str1, str2);
	printf("%s \n", str1);
	return (0);
}
