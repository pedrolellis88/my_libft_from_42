/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:35:14 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/22 09:00:09 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		chr;

	chr = (unsigned char)c;
	str = (const unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (*str == chr)
			return ((void *)str);
		str++;
	}
	if (c == '\0')
		return ((void *)s);
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>

int main()
{
	printf("%s\n", (const char *)memchr("ABCD",'B', 4)); 
	printf("%s\n", (const char *)ft_memchr("ABCD",'B',4));
}*/
