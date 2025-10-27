/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:44:20 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/17 11:12:34 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int     main(int c, char **v)
{
        (void)c;
        printf("%d\n", ft_isalnum(*v[1]));
        printf("%d", isalnum(*v[1]));
}*/
