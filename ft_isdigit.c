/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:10:51 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/13 15:48:51 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", isdigit('0'));
	printf("%d\n", isdigit('5'));
	printf("%d\n", isdigit('9'));
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit(' '));
}*/
