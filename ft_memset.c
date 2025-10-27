/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:37:16 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/21 17:12:57 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*array;

	i = 0;
	array = (char *)s;
	while (i < n)
		array[i++] = c;
	return (s);
}
/*#include <string.h>
#include <stdio.h>

int main() 
{
	int	i;
	char buffer[5] = {1, 2, 3, 4, 5};
	char tab[5] = {1, 2, 3, 4, 5};

	memset(buffer, 10, sizeof(buffer));
	i = 0;
	while (i < 4)
		printf("%d ", buffer[i++]);
	printf("\n");
	ft_memset(tab, 10, sizeof(tab));
	i = 0;
        while (i < 4)
                printf("%d ", tab[i++]);
}*/
