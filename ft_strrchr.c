/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:13:01 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/01 13:47:43 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[i]);
	while (i > 0) 
	{
		i--;
		if (s[i] == c) 
			return ((char *)&s[i]);
	}
	return (NULL);
}
/*
void test_strrchr(const char *str, int c)
{
    char *result_ft = strrchr(str, c);
    char *result_std = strrchr(str, c);

    printf("Chaîne: \"%s\"\n", str);
    printf("Caractère recherché: '%c'\n", c);
    printf("Résultat de ft_strrchr: %s\n", result_ft ? result_ft : "NULL");
    printf("Résultat de la fonction standard strrchr: %s\n", result_std ? result_std : "NULL");

    if (result_ft == result_std) {
        printf("Les résultats concordent.\n\n");
    } else {
        printf("Les résultats divergent.\n\n");
    }
}

int main()
{
    const char *test_strings[] = {
        "Hello, world!",
        "This is a test string.",
        "Another example",
        "Test for NULL character: \0",
        "Let's test for multiple occurrences aa",
        "And a string without the character"
    };

    int test_chars[] = {'o', 'z', 't', '\0', 'a', 'x'};

    for (size_t i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); ++i)
    {
        for (size_t j = 0; j < sizeof(test_chars) / sizeof(test_chars[0]); ++j)
        {
            test_strrchr(test_strings[i], test_chars[j]);
        }
    }

    return 0;
}*/
