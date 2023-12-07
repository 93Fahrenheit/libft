/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:01 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/04 19:36:39 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

int main() {
    // Test 1: Chaîne vide
    const char *test1 = "";
    char *result1 = ft_strdup(test1);
    char *expected1 = strdup(test1);
    printf("Test 1: %s\n", (strcmp(result1, expected1) == 0) ? "Réussi" : "Échoué");
    free(result1);
    free(expected1);

    // Test 2: Chaîne non vide
    const char *test2 = "Bonjour";
    char *result2 = ft_strdup(test2);
    char *expected2 = strdup(test2);
    printf("Test 2: %s\n", (strcmp(result2, expected2) == 0) ? "Réussi" : "Échoué");
    free(result2);
    free(expected2);

    // Test 3: Chaîne avec des caractères spéciaux
    const char *test3 = "!@#$%^&*()";
    char *result3 = ft_strdup(test3);
    char *expected3 = strdup(test3);
    printf("Test 3: %s\n", (strcmp(result3, expected3) == 0) ? "Réussi" : "Échoué");
    free(result3);
    free(expected3);
    
    // Test 4: Chaîne NULL
    const char *test4 = NULL;
    char *result4 = ft_strdup(test4);
    char *expected4 = strdup(test4);
    printf("Test 4 (NULL): %s\n", (strcmp(result4, expected4) == 0) ? "Réussi" : "Échoué");
    free(result4);
    free(expected4);

    // Test 5: Chaîne avec des espaces
    const char *test5 = "   Espaces   ";
    char *result5 = ft_strdup(test5);
    char *expected5 = strdup(test5);
    printf("Test 5: %s\n", (strcmp(result5, expected5) == 0) ? "Réussi" : "Échoué");
    free(result5);
    free(expected5);

    return 0;
}
