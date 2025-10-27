/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:25:21 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 15:33:34 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
/*#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY);
	ft_putstr_fd("OLA MEU NOME É PEDRO", fd);
}*/
