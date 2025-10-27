/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:06:08 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/24 14:41:27 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*static  void    ft_del(void *content)
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
        ft_lstclear(&test1, ft_del);
	if (!test1)
        	printf("test1 apagado\n");
}*/
