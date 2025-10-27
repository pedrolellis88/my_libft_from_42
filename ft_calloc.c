/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:30:18 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/22 10:13:01 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size != 0 && nmemb > INT_MAX / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}	
	array = (void *)malloc(nmemb * size);
	if (array)
		ft_bzero(array, nmemb * size);
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", (char *)calloc(1, 5));
	printf("%s", (char *)ft_calloc(1, 5));
}*/
