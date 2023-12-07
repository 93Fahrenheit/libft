/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:21:23 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/13 15:47:58 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
int	main (void)
{
	printf("%d\n", ft_isalpha(70));
	printf("%d\n", ft_isalpha(97));
	printf("%d\n", ft_isalpha(48));
	printf("%d\n", isalpha(70));
        printf("%d\n", isalpha(97));
        printf("%d\n", isalpha(48));
}*/
