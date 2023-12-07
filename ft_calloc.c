/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:32:51 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/05 14:28:25 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

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
/*
    // Fonction pour comparer les résultats de ft_calloc et calloc
    void compare_results(size_t nmemb, size_t size) {
    printf("Test pour nmemb=%zu, size=%zu\n", nmemb, size);

    // Utilisation de la vraie fonction calloc
    void *real_calloc = calloc(nmemb, size);
    if (real_calloc == NULL) {
        perror("Erreur d'allocation avec calloc");
        exit(EXIT_FAILURE);
    }

    // Utilisation de votre implémentation ft_calloc
    void *ft_result = ft_calloc(nmemb, size);
    if (ft_result == NULL) {
        perror("Erreur d'allocation avec ft_calloc");
        exit(EXIT_FAILURE);
    }

    // Comparaison des résultats
    if (memcmp(real_calloc, ft_result, nmemb * size) == 0) {
        printf("Les résultats de ft_calloc et calloc sont identiques.\n");
    } else {
        printf("Les résultats de ft_calloc et calloc sont différents.\n");
    }

    // Libération de la mémoire allouée
    free(real_calloc);
    free(ft_result);
    printf("\n");
}

int main() {
    // Test avec des tailles nulles
    compare_results(0, 0);

    // Test avec des tailles non nulles
    compare_results(5, sizeof(int));
    compare_results(10, sizeof(char));
    compare_results(3, sizeof(double));

    // Test avec des tailles énormes (pour vérifier la gestion des débordements)
    compare_results(SIZE_MAX, sizeof(int));
    compare_results(sizeof(int), SIZE_MAX);
    return 0;
}*/
