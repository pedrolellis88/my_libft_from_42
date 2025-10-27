/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:44:53 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/21 17:10:28 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*array;

	i = 0;
	array = (char *)s;
	while (i < n)
	{
		array[i] = 0;
		i++;
	}
}
/*#include <string.h>
#include <stdio.h>

int main() 
{
	int	i;
	char buffer[5] = {1, 2, 3, 4, 5};
	char tab[5] = {1, 2, 3, 4, 5};

	bzero(buffer,sizeof(buffer));
	i = 0;
	while (i < 4)
		printf("%d ", buffer[i++]);
	printf("\n");
	ft_bzero(tab, sizeof(tab));
	i = 0;
        while (i < 4)
                printf("%d ", tab[i++]);
}*/
