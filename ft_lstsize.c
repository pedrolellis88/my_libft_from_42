/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:12:25 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 18:42:13 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("1");
	n2 = ft_lstnew("2");
	n3 = ft_lstnew("3");
	ft_lstadd_front(&n3, n2);
	ft_lstadd_front(&n2, n1);
	printf("%d\n", ft_lstsize(n1));
}*/
