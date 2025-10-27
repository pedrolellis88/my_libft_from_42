/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:27:37 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/17 11:31:40 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
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
	(void)v;
	printf("%d\n", ft_isprint(*v[1]));
	printf("%d", isprint(*v[1]));
}*/
