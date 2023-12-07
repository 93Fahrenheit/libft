/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:31:55 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/13 15:38:26 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main(void)
{
	const char	s1[] = "Hello";
	const char	s2[] = "Bonjour";

	printf("%zu\n", ft_strlen(s1));
	printf("%zu\n", ft_strlen(s2));
	printf("%zu\n", strlen(s1));
	printf("%zu\n", strlen(s2));
	return (0);
}*/
