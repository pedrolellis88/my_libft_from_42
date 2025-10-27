/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:31:12 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/22 09:52:54 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{	
		j = 0;
		while (big[j + i] == little[j] && i + j < len && little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char haystack[30] = "aaabcabcd";

	printf("%s\n", strnstr(haystack, "cd", 10));
	printf("%s\n", ft_strnstr(haystack, "cd", 10));
}*/	
