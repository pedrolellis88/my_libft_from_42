/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:44:04 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 15:07:20 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

static void	to_upper_at(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_toupper((unsigned char)*c);
}

int	main(void)
{
	char s[] = "pedro pedro pedro";
	ft_striteri(s, to_upper_at);
	printf("%s\n", s); 
  
}*/
