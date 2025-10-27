/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:03:39 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/21 17:12:21 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *) src;
	if (d == s || n == 0)
		return (dest);
	if (!d && !s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*#include <string.h>
#include <stdio.h>

int main() 
{
	int	i;
	char buffer[5] = {0, 0, 0, 0, 0};
	char tab[5] = {1, 2, 3, 4, 5};

	memcpy(buffer, tab, sizeof(buffer));
	i = 0;
	while (i < 4)
		printf("%d ", buffer[i++]);
	printf("\n");
	ft_memcpy(buffer, tab, sizeof(buffer));
	i = 0;
        while (i < 4)
                printf("%d ", buffer[i++]);
}*/
