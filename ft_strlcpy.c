/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:46:08 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/21 17:13:49 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char buf[10] = "ABC";
	char tab[10] = "ABC";
	char str[10] = "Z";

	printf("%zu\n", strlcpy(buf, str, 10));
	printf("%zu\n", ft_strlcpy(tab, str, 10));
}*/		
