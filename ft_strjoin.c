/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:04:13 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/12 18:34:33 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int	size1;
	int	size2;
	int	i;
	int	j;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * size1 + size2 + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size1)
	{
		dest[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		dest[size1 + j] = s2[j];
		j++;
	}
	dest[size1 + j] = '\0';
	return (dest);
}
/*
int main()
{
    char *s1 = "I want ";
    char *s2 = "to die";

    char *resultat = ft_strjoin(s1, s2);

    if (resultat != NULL)
    {
        printf("%s\n", resultat);

        free(resultat);
    }
    else
    {
        printf("Erreur d'allocation mémoire.\n");
    }

    return 0;
}*/
