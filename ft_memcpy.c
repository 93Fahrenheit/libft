/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:08:40 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/22 23:28:23 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main(void) 
{
    // Test 1: Copie de chaînes de caractères
    char source_str[] = "Hello, World!";
    char dest_str[20];
    ft_memcpy(dest_str, source_str, strlen(source_str) + 1);
    printf("Test 1: Copie de chaînes de caractères\n");
    printf("Source: %s\n", source_str);
    printf("Destination: %s\n", dest_str);

    // Test 2: Copie de tableaux d'entiers
    int source_int[] = {1, 2, 3, 4, 5};
    int dest_int[5];
    ft_memcpy(dest_int, source_int, sizeof(source_int));
    printf("\nTest 2: Copie de tableaux d'entiers\n");
    printf("Source: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", source_int[i]);
    }
    printf("\nDestination: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dest_int[i]);
    }
    printf("\n");

    // Test 3: Copie de mémoire avec des types personnalisés
    struct {
        int x;
        char y;
    } source_struct = {42, 'A'};
    struct {
        int x;
        char y;
    } dest_struct;
    ft_memcpy(&dest_struct, &source_struct, sizeof(source_struct));
    printf("\nTest 3: Copie de mémoire avec des types personnalisés\n");
    printf("Source: x=%d, y=%c\n", source_struct.x, source_struct.y);
    printf("Destination: x=%d, y=%c\n", dest_struct.x, dest_struct.y);

    return 0;
}*/
