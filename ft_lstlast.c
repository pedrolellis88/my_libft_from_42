/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:43:00 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 19:38:23 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*last;

	n1 = ft_lstnew("hello");
	n2 = ft_lstnew("oi");
	n3 = ft_lstnew("ola");
	ft_lstadd_front(&n3, n2);
	ft_lstadd_front(&n2, n1);
	last = ft_lstlast(n1);
	printf("%s\n",(char *)last->content);
}*/
