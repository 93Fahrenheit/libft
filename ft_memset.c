/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:02:12 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/11/22 23:07:56 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;
	unsigned char	value;

	i = 0;
	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}
/*
void print_memory(const char *label, const unsigned char *memory, size_t n) {
    printf("%s: ", label);
    for (size_t i = 0; i < n; ++i) {
        printf("%02X ", memory[i]);
    }
    printf("\n");
}

int main() {
    unsigned char buffer1[10];
    unsigned char buffer2[10];

    // Test 1: Remplissage standard
    memset(buffer1, '#', 10);
    ft_memset(buffer2, '#', 10);
    print_memory("Standard memset", buffer1, 10);
    print_memory("ft_memset", buffer2, 10);

    // Test 2: Remplissage avec un nombre limité d'octets
    memset(buffer1, 'A', 5);
    ft_memset(buffer2, 'A', 5);
    print_memory("Partial memset", buffer1, 10);
    print_memory("ft_memset", buffer2, 10);

    // Test 3: Remplissage avec zéro
    memset(buffer1, 0, 10);
    ft_memset(buffer2, 0, 10);
    print_memory("Zero memset", buffer1, 10);
    print_memory("ft_memset", buffer2, 10);

    // Test 4: Remplissage avec un caractère non-ASCII
    memset(buffer1, 0x80, 10);
    ft_memset(buffer2, 0x80, 10);
    print_memory("Non-ASCII memset", buffer1, 10);
    print_memory("ft_memset", buffer2, 10);

    // Comparaison des résultats
    int test1 = memcmp(buffer1, buffer2, 10) == 0;
    int test2 = memcmp(buffer1, buffer2, 5) == 0;
    int test3 = memcmp(buffer1, buffer2, 10) == 0;
    int test4 = memcmp(buffer1, buffer2, 10) == 0;

    if (test1 && test2 && test3 && test4) {
        printf("All tests passed.\n");
    } else {
        printf("Some tests failed.\n");
    }

    return 0;
}*/
