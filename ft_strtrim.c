/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:19:06 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/24 17:12:43 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_remove(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	char	*news(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (ft_strdup(""));
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (j == 0)
		return (ft_strdup(""));
	while (ft_remove(set, s1[i]) == 1)
		i++;
	while (ft_remove(set, s1[j]) == 1)
		j--;
	return (news(s1, i, j - i + 1));
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("abababbaba Paul is Brabo ababababab", "ab"));
}*/		
