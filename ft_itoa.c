/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:05:45 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/14 19:08:14 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>

static int	ft_long(long int nb, int n)
{
	long int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	if (n < 0)
		return (++count);
	return (count);
}

char	*ft_itoa(int n)
{
	long int	nb;
	long int	len;
	char	*str;

	nb = n;
	if (n < 0)
		nb = -nb;
	len = ft_long(nb, n);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = '0' + nb % 10;
		nb /= 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);	
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-45552456));
	return (0);
}*/
