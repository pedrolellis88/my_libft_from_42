/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:23:40 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/20 17:33:13 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char x = (char)toupper('a');
	char y = (char)ft_toupper('a');

	printf("%c\n", x);
	printf("%c", y);
}*/
