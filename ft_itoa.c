/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:48:59 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 14:07:23 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_num(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	count = count_num(nbr);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	i = count - 1;
	while (nbr > 0)
	{
		str[i--] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	str[count] = '\0';
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(-450));
}*/
