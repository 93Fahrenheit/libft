/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <fel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:06:00 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/07 18:08:26 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	result = 0;
	negative = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			negative = -negative;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * negative);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("      --+-+---+--420dq124"));
	printf("%d\n", ft_atoi("12345"));
	printf("%d\n", ft_atoi("-6789"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", atoi("      --+-+---+--420dq124"));
	printf("%d\n", atoi("12345"));
	printf("%d\n", atoi("-6789"));
	printf("%d\n", atoi("0"));
	return(0);
}*/
