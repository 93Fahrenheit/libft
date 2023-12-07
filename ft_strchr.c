/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:12:36 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/01 13:43:07 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		 return ((char *)&s[i]);
	return (NULL);
}
/*
int main(void) {
    // Tests pour différentes lettres présentes dans la phrase
    char letters_present[] = {'b', 'o', 'j', ' ', 'm', 'd', '\0'};
    printf("Tests pour des lettres présentes :\n");
    for (size_t i = 0; i < sizeof(letters_present) / sizeof(letters_present[0]); i++) {
        char *result_ft = ft_strchr("bonjour le monde", letters_present[i]);
        char *result_std = strchr("bonjour le monde", letters_present[i]);

        // Utilisez les variables pour éviter les avertissements
        printf("Résultat fonction ft_strchr : %p\n", result_ft);
        printf("Résultat fonction strchr   : %p\n", result_std);
    }

    // Tests pour différentes lettres absentes de la phrase
    char letters_absent[] = {'x', 'z', '!', '\t', ','};
    printf("Tests pour des lettres absentes :\n");
    for (size_t i = 0; i < sizeof(letters_absent) / sizeof(letters_absent[0]); i++) {
        char *result_ft = ft_strchr("bonjour le monde", letters_absent[i]);
        char *result_std = strchr("bonjour le monde", letters_absent[i]);

        // Utilisez les variables pour éviter les avertissements
        printf("Résultat fonction ft_strchr : %p\n", result_ft);
        printf("Résultat fonction strchr   : %p\n", result_std);
    }

    // Tests pour des caractères spéciaux
    char special_chars[] = {' ', '\t', '\0', ','};
    printf("Tests pour des caractères spéciaux :\n");
    for (size_t i = 0; i < sizeof(special_chars) / sizeof(special_chars[0]); i++) {
        char *result_ft = ft_strchr("bonjour le monde", special_chars[i]);
        char *result_std = strchr("bonjour le monde", special_chars[i]);

        // Utilisez les variables pour éviter les avertissements
        printf("Résultat fonction ft_strchr : %p\n", result_ft);
        printf("Résultat fonction strchr   : %p\n", result_std);
    }

    return 0;
}*/
