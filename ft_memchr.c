/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:14:17 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/23 01:13:26 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*str;
	unsigned char	letter;

	str = (const unsigned char *)s;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == letter)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}
/*
void print_result(const char *test_name, const char *expected, const char *actual) {
    printf("%s: %s\n", test_name, strcmp(expected, actual) == 0 ? "PASSED" : "FAILED");
}

int main(void) {
    // Test 1: Recherche d'un caractère présent
    char str1[] = "Hello, World!";
    char search_char1 = 'o';
    void *result1 = ft_memchr(str1, search_char1, strlen(str1));
    print_result("Test 1", "Trouvé", (result1 != NULL) ? "Trouvé" : "Non trouvé");

    // Test 2: Recherche d'un caractère absent
    char str2[] = "Hello, World!";
    char search_char2 = 'x';
    void *result2 = ft_memchr(str2, search_char2, strlen(str2));
    print_result("Test 2", "Non trouvé", (result2 != NULL) ? "Trouvé" : "Non trouvé");

    // Test 3: Recherche d'un caractère présent avec chevauchement
    char str3[] = "Hello, World!";
    char search_char3 = 'o';
    void *result3 = ft_memchr(str3 + 5, search_char3, strlen(str3) - 5);
    print_result("Test 3", "Trouvé", (result3 != NULL) ? "Trouvé" : "Non trouvé");

    // Test 4: Recherche d'un caractère absent avec chevauchement
    char str4[] = "Hello, World!";
    char search_char4 = 'x';
    void *result4 = ft_memchr(str4 + 5, search_char4, strlen(str4) - 5);
    print_result("Test 4", "Non trouvé", (result4 != NULL) ? "Trouvé" : "Non trouvé");

    // Ajoutez d'autres tests selon les différents cas que vous souhaitez couvrir

    return 0;
}*/
