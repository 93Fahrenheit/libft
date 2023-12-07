/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:11:52 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/01 13:29:57 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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
/*
int compare_memory(const void *s1, const void *s2, size_t n) {
    return memcmp(s1, s2, n);
}

int main() {
    // Test 1: Chaîne de caractères vide
    char str1[] = "";
    char str2[] = "";
    ft_bzero(str1, 0);
    bzero(str2, strlen(str2)); // Correction ici
    if (compare_memory(str1, str2, sizeof(str1)) != 0) {
        printf("Test 1 failed\n");
        return 1;
    }

    // Test 2: Chaîne de caractères non vide
    char str3[] = "Hello, World!";
    char str4[] = "Hello, World!";
    ft_bzero(str3 + 7, 5); // Remplace "World" par des zéros
    bzero(str4 + 7, 5);
    if (compare_memory(str3, str4, sizeof(str3)) != 0) {
        printf("Test 2 failed\n");
        return 1;
    }

    // Test 3: Tableau d'entiers
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    ft_bzero(arr1 + 2, 2 * sizeof(int)); // Remplace les deux éléments du milieu par des zéros
    bzero(arr2 + 2, 2 * sizeof(int));
    if (compare_memory(arr1, arr2, sizeof(arr1)) != 0) {
        printf("Test 3 failed\n");
        return 1;
    }

    // Test 4: Structure
    struct {
        int a;
        char b;
        double c;
    } myStruct1, myStruct2;

    myStruct1.a = 42;
    myStruct1.b = 'X';
    myStruct1.c = 3.14;

    myStruct2 = myStruct1;
    ft_bzero(&myStruct1, sizeof(myStruct1)); // Remplace tous les octets de la structure par des zéros
    bzero(&myStruct2, sizeof(myStruct2));

    if (compare_memory(&myStruct1, &myStruct2, sizeof(myStruct1)) != 0) {
        printf("Test 4 failed\n");
        return 1;
    }

    printf("Tous les tests ont réussi\n");
    return 0;
}*/
