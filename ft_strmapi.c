/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:36:19 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/07 20:12:32 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	dest;
	size_t	i;
	size_t	len;
	
	i = 0;
	if (!str || !ft)
		return (NULL);
	len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (len +1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = ft(i, str[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);	
}
