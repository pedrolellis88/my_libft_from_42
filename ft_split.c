/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:01:34 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 11:55:49 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*mini_dup(const char *s, size_t start, size_t end)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static void	free_all(char **array, size_t words)
{
	while (words > 0)
		free(array[words--]);
	free(array);
}

static	int	validation(char const *s, char **array)
{
	if (!s || !array)
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	letter;
	size_t	vector;
	size_t	start;

	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (validation(s, array) == 0)
		return (NULL);
	letter = 0;
	vector = 0;
	while (s[letter])
	{
		while (s[letter] == c)
			letter++;
		if (!s[letter])
			break ;
		start = letter;
		while (s[letter] && s[letter] != c)
			letter++;
		array[vector] = mini_dup(s, start, letter);
		if (!array[vector++])
			return (free_all(array, vector - 1), NULL);
	}
	array[vector] = NULL;
	return (array);
}
/*
#include <stdio.h>
int	main(int c,char **v)
{
	size_t	i;
	char	**m = ft_split(v[1], v[2][0]);
	(void)c;
	i = 0;
	while (m[i])
	{
		printf("[%s] ", m[i]);
		i++;
	}
	printf("\n");
}*/
