/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 03:25:37 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/15 04:59:50 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>

static size_t	ft_is_sep(char b, char c) // vérifie si le caractere a copier (b) est un separateur ou la fin de la chaine ('\0')
{
	if (b == c || b == '\0')
		return (1); // b est un separateur ou '\0'
	return (0); // b n'est pas un separateur
}

static size_t	ft_word_len(char *s, char c) // calcule la taille du mot a copier
{
	size_t	size; // stock la taille du mot
	size_t	i; // iterateur pour la chaine *s

	i = 0;
	size = 0;
	while (ft_is_sep(s[i], c) == 1) // ignore les separateurs au debut du mot
		++i;
	while (ft_is_sep(s[i], c) == 0) // compte les caracteres jusqu'a la rencontre d'un separateur
	{
		++i;
		++size;
	}
	return (size);
}

static size_t	ft_create_word(char **str, int count, char *s, char c) // cree un mot a partir de la chaine *s et alloue de la memoire pour ce mot
{
	size_t	i; // iterateur pour parcourir *s
	size_t	j; // itérateur pour copier les caractères dans le nouveau mot
	size_t	sizeword; // stock la taille du mot

	i = 0;
	j = 0;
	sizeword = ft_word_len(s, c); // calcule la taille du mot
	str[count] = malloc(sizeof(char) * sizeword + 1);
	if (!str[count])
		return (0);
	while (s[i]) // boucle pour avancer i jusqu'a la 1ere lettre du mot
	{
		if (ft_is_sep(s[i], c) == 0) 
			break ; // sort de la boucle si le caractere n'est pas un separateur
		++i;
	}
	while (ft_is_sep(s[i], c) == 0) // copie les caracteres dans le mot jusqu'au prochain separateur dan *s
	{
		str[count][j] = s[i]; // copie le carcactere actuel de *s dans **str a l'indice count et a l'indice j
		++j; // incremente j dans **str
		++i; // incremente i dans *s
	}
	str[count][j] = '\0';
	return (i); // retourne la position actuelle dans *s apres avoir cree le mot
}

void	ft_free_all(int count, char **str)
{
	while (count)
	{
		free(str[count]); // libère la mémoire allouée pour le mot
		count--; // decremente count pour passer au mot precedent dans **str
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i; // iterateur pour parcourir la chaine
	size_t	count; // compteur de mots dans la chaine
	size_t	wordcount; // compteur de mots a creer
	char	**str; // tableau pour stocker les mots

	i = -1;
	wordcount = 0;
	if (!s)
		return (NULL);
	while (s[++i])
		if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			++wordcount;
	i = 0;
	count = 0;
	str = (char **)malloc(sizeof(char *) * (wordcount + 1)); // allocation de memoire pour le tableau de chaines
	if (!str)
		return (NULL);
	while (count < wordcount) // creer chaque mot pour le stocker dans le tableau
	{
		i = i + ft_create_word(str, count++, &((char *)s)[i], c);
		if (str[count - 1] == NULL)
			ft_free_all(count - 1, str);
	}
	return (str[count] = NULL, str); //terminer le tableau de chaines par NULL
}

void	free_split_result(char **resultat) // libere la memoire allouee pour le tableau de chaines
{
	int	i = 0;
	while (resultat[i] != NULL)
	{
		free(resultat[i]);
		i++;
	}
	free(resultat);
}

int main(void) 
{
    char s[] = "   Hello world how are you   ";
    char c = ' ';
    char **resultat = ft_split(s, c);

    if (resultat != NULL) 
{
	int i = 0;
        while (resultat[i] != NULL) {
            printf("%s\n", resultat[i]);
            i++;
        }

        // Libération de la mémoire allouée
        free_split_result(resultat);
    } else {
        printf("L'allocation mémoire a échoué.\n");
    }

    return 0;
}
