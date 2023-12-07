/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:50:20 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/07 19:30:44 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
/*
// Fonction pour afficher le caractère et son index
void print_char_and_index(unsigned int index, char *c) {
    printf("Character at index %u: %c\n", index, *c);
}

// Fonction pour convertir les caractères en majuscules
void convert_to_uppercase(unsigned int index, char *c) {
    (void)index;  // Évite l'avertissement sur le paramètre non utilisé
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 'a' + 'A';
    }
}

int main(void) {
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "12345";

    // Test 1 : Afficher les caractères et leurs indices
    printf("Test 1:\n");
    ft_striteri(str1, print_char_and_index);

    // Test 2 : Convertir les caractères en majuscules
    printf("\nTest 2:\nOriginal: %s\n", str2);
    ft_striteri(str2, convert_to_uppercase);
    printf("Modified: %s\n", str2);

    // Test 3 : Afficher les caractères et leurs indices
    printf("\nTest 3:\n");
    ft_striteri(str3, print_char_and_index);

    return 0;
}*/
