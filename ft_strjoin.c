/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:56:13 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/22 11:23:06 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	news = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!news)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		news[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		news[i + j] = s2[j];
		j++;
	}
	news[i + j] = '\0';
	return (news);
}
/*#include <stdio.h>
int	main(int c, char **v)
{
	if (c > 1)
		printf("%s\n", ft_strjoin(v[1], v[2]));
	else
		printf("Error");
}*/
