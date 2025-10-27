/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:07:54 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/22 09:30:13 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < (n - 1) && str1[i] == str2[i])
	{
		i++;
	}
	return ((int)str1[i] - (int)str2[i]);
}
/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char s2[] = {-128, 0, 127, 0};
	char s3[] = {-128, 0, 127, 0};


	printf("%d", memcmp(s2, s3, 4));
	printf(" %d",ft_memcmp(s2, s3, 4));
}*/
