/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:07:34 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/13 15:42:45 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('w'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('\t'));
	printf("%d\n", isalnum('0'));
	printf("%d\n", isalnum('5'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('w'));
	printf("%d\n", isalnum(' '));
	printf("%d\n", isalnum('\t'));
}*/
