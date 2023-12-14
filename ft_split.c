/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:19:42 by fel-abbo          #+#    #+#             */
/*   Updated: 2023/12/14 23:54:36 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>

static size_t	ft_is_sep(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (ft_is_sep(s[i], sep) == 1)
	{
		i++;
	}
	while (ft_is_sep(s[i], sep) == 1)
	{
		i++;
		size++;
	}
	return (size);
}

static size_t	ft_word_in_tab(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	sizeword;
}

void	ft_free_all(int count, char **str)
{
	
}

char	**ft_split(char const *s, char c)
{
	
}

int	main(void)
{
	char	*s = "  Hello word How are you  ";
	char	c = ' '
	
	return (0);
}
