/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:15:20 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/13 15:45:47 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii(1));
	printf("%d\n", ft_isascii(48));
	printf("%d\n", ft_isascii(100));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(130));
	printf("%d\n", ft_isascii(-50));
	printf("%d\n", isascii(1));
	printf("%d\n", isascii(48));
	printf("%d\n", isascii(100));
	printf("%d\n", isascii(127));
	printf("%d\n", isascii(130));
	printf("%d\n", isascii(-50));
}*/
