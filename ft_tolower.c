/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:37:09 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/20 17:39:27 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char x = (char)tolower('2');
	char y = (char)ft_tolower('3');

	printf("%c\n", x);
	printf("%c", y);
}*/
