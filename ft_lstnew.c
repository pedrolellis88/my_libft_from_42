/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:39:32 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/23 17:40:25 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
/*#include <stdio.h>
int	main(void)
{
    t_list *n1 = ft_lstnew("um");
    t_list *n2 = ft_lstnew("dois");
    t_list *it;

    n1->next = n2;
    n2->next = NULL;
    it = n1;
    while (it)
    {
        printf("%s\n", (char *)it->content);
        it = it->next;
    }
}*/
