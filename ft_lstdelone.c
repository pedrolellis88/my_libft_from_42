/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:14:57 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/10/24 14:55:57 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*static	void	ft_del(void *content)
{
	(void)content;
	free(content);
}
#include <stdio.h>
int	main(void)
{
	t_list	*test1;
	t_list	*test2;
	t_list	*temp;

	test1 = ft_lstnew(ft_strdup("primeiro nó"));
	test2 = ft_lstnew(ft_strdup("segundo nó"));
	ft_lstadd_front(&test2, test1);
	temp = test1;
	while (temp)
	{
        	printf("%s\n", (char *)temp->content);
        	temp = temp->next;
	}
	ft_lstdelone(test1, ft_del);
	temp = test1;
        printf("%s\n", (char *)temp->content);
}*/
