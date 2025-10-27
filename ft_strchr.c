/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:46:08 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/21 17:13:10 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", strchr("PEDRO HENRIQUE", '\0'));
	printf("%s", ft_strchr("PEDRO HENRIQUE", '\0'));
}*/		
