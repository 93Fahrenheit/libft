/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:46:31 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/07 14:56:02 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>


size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}	
}

 void *ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	mult;

	mult = nmemb * size;
	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = malloc(mult);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, mult);
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*new_str;
    size_t	i;

    i = 0;
    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (new_str = ft_calloc(1, 1));
    if (len + start > ft_strlen(s))
        len = ft_strlen(s) - start;
    new_str = malloc(sizeof(char) * (len + 1));
    if (new_str == NULL)
        return (NULL);
    while (s && i < len)
    {
        new_str[i] = s[i + start];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}
/*
int main()
{
    const char *str = "Hello, World!";
    char *result = ft_substr(str, 7, 5);


    if (result != NULL)
    {
        printf("Original: %s\n", str);
        printf("Substring: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error: Allocation failed.\n");
    }

    return 0;
}*/
