/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:41:45 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/24 17:20:55 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int     main(void)
{
    t_list *n1;
    t_list *n2;

    n1->content = "eu";
    n1->next = NULL;
    n2 = ft_lstnew("ola");
    ft_lstadd_front(&n1, n2);
    while (n2)
    {
        printf("%s\n", (char *)n2->content);
        n2 = n2->next;
    }
}*/
