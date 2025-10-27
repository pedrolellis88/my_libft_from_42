/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:03 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 19:57:32 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	ch = (unsigned char)c;
	if (ch == '\0')
		return ((char *)(s + i));
	while (i--)
	{
		if ((unsigned char)s[i] == ch)
			return ((char *)(s + i));
	}		
	return (NULL);
}
/*#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", strrchr("PEDRO HENRIQUE", 'Z'));
	printf("%s", ft_strrchr("PEDRO HENRIQUE", 'Z'));
}*/
