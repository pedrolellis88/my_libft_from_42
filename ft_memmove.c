/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:44:40 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 13:28:17 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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
	if (d > s && d < n + s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*#include <string.h>
#include <stdio.h>

int main() 
{
	int	i;
	char buffer[20] = {1, 2, 3, 4};
	char tab[20] = {1, 2, 3, 4};

	i = 0;
	memmove(buffer + 3, buffer, 10);
	while (buffer[i])
		printf("%d", buffer[i++]);
	printf("\n");
	i = 0;
	ft_memmove(tab + 3, tab, 10);
        while (buffer[i])
                printf("%d", buffer[i++]);
        printf("\n");

}*/
