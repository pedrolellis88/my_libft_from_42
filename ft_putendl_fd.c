/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:34:33 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 15:40:19 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
	write(fd, "\n", 1);
}
/*#include <fcntl.h>
int     main(void)
{
        int     fd;

        fd = open("test.txt", O_WRONLY);
        ft_putendl_fd("QUEBRA DE LINHA", fd);
}*/
