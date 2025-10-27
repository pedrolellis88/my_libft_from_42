/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:37:04 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/24 16:30:41 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
/*static  void    *applystrchr(void *content)
{
	return(ft_strchr((const char *)content, 'o'));
}
static  void    ft_del(void *content)
{
        (void)content;
        free(content);
}
#include <stdio.h>
int     main(void)
{
        t_list  *test1;
        t_list  *test2;
	t_list	*test3;
	t_list	*temp;
	t_list	*new;

        test1 = ft_lstnew(ft_strdup("primeiro nó"));
        test2 = ft_lstnew(ft_strdup("segundo nó"));
	test3 = ft_lstnew(ft_strdup("terceiro nó"));
        ft_lstadd_front(&test3, test2);
	ft_lstadd_front(&test2, test1);
	temp = test1;
        while (temp)
        {
                printf("%s\n", (char *)temp->content);
                temp = temp->next;
        }
	new = ft_lstmap(test1, applystrchr, ft_del);
	while (new)
        {
                printf("%s\n", (char *)new->content);
                new = new->next;
        }
}*/
