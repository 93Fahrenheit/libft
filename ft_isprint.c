/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:40:06 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/13 15:46:25 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint('0'));
	printf("%d\n", ft_isprint('5'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('w'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('\t'));
	printf("%d\n", isprint('0'));
	printf("%d\n", isprint('5'));
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint('w'));
	printf("%d\n", isprint(' '));
	printf("%d\n", isprint('\t'));
}*/
