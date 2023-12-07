/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:38:23 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/13 18:45:36 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && s1[i] == s2[i] && i < (n -1))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	unsigned int	n = 3;
	printf("me    string.h\n");
	printf("%d   ", ft_strncmp("Hello","Salut", n));
	printf("%d\n", strncmp("Hello", "Salut", n));
	printf("%d      ", ft_strncmp("Oui","Non", n));
	printf("%d\n", strncmp("Oui","Non", n));
	printf("%d      ", ft_strncmp("abcyes","abcno", n));
	printf("%d\n", strncmp("abcyes","abcno", n));
	printf("%d      ", ft_strncmp("1234","1234", n));
	printf("%d\n", strncmp("1234", "1234", n));
	printf("%d      ", ft_strncmp("Hey","Hell", n));
	printf("%d\n", strncmp("Hey", "Hell", n));
	return (0);
}*/
