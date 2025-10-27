/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:08:46 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 19:52:58 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>
int     main(void)
{
    t_list *n1;
    t_list *n2;

    n1 = ft_lstnew("oi");
    n2 = ft_lstnew("ola");
    ft_lstadd_back(&n1, n2);
    while (n1)
    {
        printf("%s\n", (char *)n1->content);
        n1 = n1->next;
    }
}*/
