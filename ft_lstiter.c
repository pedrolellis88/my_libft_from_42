/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:57:25 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/24 16:13:04 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*static  void    applymemset(void *content)
{
	ft_memset(content, '4', ft_strlen((const char *)content));
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
        ft_lstiter(test1, applymemset);
	while (test1)
        {
                printf("%s\n", (char *)test1->content);
                test1 = test1->next;
        }

}*/
