/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:21:03 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/17 11:04:38 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}	
/*
#include <stdio.h>
#include <ctype.h>
int	main(int c, char **v)
{
	(void)c;
	printf("%d\n", ft_isalpha(*v[1]));
	printf("%d", isalpha(*v[1]));
}*/
