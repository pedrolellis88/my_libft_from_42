/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:38:22 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/17 11:04:53 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
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
	printf("%d\n", ft_isdigit(*v[1]));
	printf("%d", isdigit(*v[1]));
}*/
