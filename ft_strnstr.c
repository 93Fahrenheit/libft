/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:50:18 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/01 17:01:31 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

	if (needle[0] == '\0')
		return (char *)haystack;

	while (haystack[i] != '\0' && i < len)
	{
		while (needle[j] != '\0' && (i + j) < len && haystack[i + j] == needle[j])
        	{
            		j++;
		}	
		if (needle[j] == '\0')
			return (char *)&haystack[i];
		i++;
        	j = 0;
	}	
    return (NULL);
}
