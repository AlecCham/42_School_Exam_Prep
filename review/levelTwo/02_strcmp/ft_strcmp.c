/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achaprak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:49:24 by achaprak          #+#    #+#             */
/*   Updated: 2019/11/13 20:14:33 by achaprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char a[] = "Apples!";
	char b[] = "Apples!";
	char c[] = "Apples!!";
	char d[] = "Appled!";

	printf("%d, %d\n", ft_strcmp(a, b), strcmp(a, b));
	printf("%d, %d\n", ft_strcmp(a, c), strcmp(a, c));
	printf("%d, %d\n", ft_strcmp(a, d), strcmp(a, d));
}
