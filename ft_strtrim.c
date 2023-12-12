/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:30:11 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/12 15:24:32 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>

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

 char *ft_strdup(const char *s)
{
	int	i;
	char	*dest;

	
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		i++;
	}
	dest = malloc(sizeof(*dest) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static size_t	verif_debut(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == str[i])
		{
			i++;
			j = 0;
		}
		if (set[j] != str[i])
			j++;
	}
	return (i);
}

static size_t	verif_fin(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (set[i])
	{
		if (set[i] == str[j])
		{
			j--;
			i = 0;
		}
		if (set[i] != str[j])
			i++;
	}
	return (j);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	len;
	char	*dest;

	if (!str)
		return (NULL);

	if (!set)
		return (ft_strdup(str));

	start = verif_debut(str, set);
	len = verif_fin(str, set);

	if ((dest = ft_substr(str, start, len - start + 1)) == NULL)
		return (NULL);

	return (dest);
}

void test(char const *s1, char const *set) {
    char *result = ft_strtrim(s1, set);
    printf("Original: \"%s\"\n", s1);
    printf("Set: \"%s\"\n", set);
    printf("Trimmed: \"%s\"\n\n", result);
    free(result);
}

int main(void) {
    // Test 1 : Chaîne vide, set vide
    test("", "");

    // Test 2 : Chaîne non vide, set vide
    test("hello", "");

    // Test 3 : Chaîne vide, set non vide
    test("", " \t\n");

    // Test 4 : Chaîne avec des caractères à trimmer au début et à la fin
    test("   hello world   ", " ");

    // Test 5 : Chaîne avec des caractères à trimmer seulement à la fin
    test("hello world   ", " ");

    // Test 6 : Chaîne avec des caractères à trimmer seulement au début
    test("   hello world", " ");

    // Test 7 : Chaîne avec des caractères à trimmer au début et à la fin (plus complexe)
    test(" \t\nhello \tworld\t \n", " \t\n");

    return 0;
}
