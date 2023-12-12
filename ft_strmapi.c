/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:36:19 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/12 14:25:41 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/*
// Déclaration du prototype de la fonction convert_to_uppercase
char convert_to_uppercase(__attribute__((unused)) unsigned int index, char c);

// Déclaration du prototype de la fonction add_one_to_digit
char add_one_to_digit(__attribute__((unused)) unsigned int index, char c);
*/
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;
	size_t	len;
	
	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);	
}
/*
// Définition de la fonction convert_to_uppercase
char convert_to_uppercase(__attribute__((unused)) unsigned int index, char c) {
    return c + ('A' - 'a');
}

// Définition de la fonction add_one_to_digit
char add_one_to_digit(__attribute__((unused)) unsigned int index, char c) {
    if (c >= '0' && c <= '9')
        return c + 1;
    return c;
}

int main(void) 
{
    // Test 1 : Chaîne vide
    char *result1 = ft_strmapi("", convert_to_uppercase);
    printf("Test 1: \"%s\"\n", result1);
    free(result1);

    // Test 2 : Chaîne "hello" avec conversion en majuscules
    char *result2 = ft_strmapi("hello", convert_to_uppercase);
    printf("Test 2: \"%s\"\n", result2);
    free(result2);

    // Test 3 : Chaîne "12345" avec ajout de 1 à chaque caractère numérique
    char *result3 = ft_strmapi("12345", add_one_to_digit);
    printf("Test 3: \"%s\"\n", result3);
    free(result3);

    return 0;
}*/
