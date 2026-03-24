/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:47:37 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 15:20:24 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*//gcc ft_lstadd_front.c ft_lstclear.c ft_lstnew.c ft_lstdelone.c
int main(void)
{
    t_list *list = NULL;
    t_list *new_node1 = ft_lstnew("Node 1 data");
    t_list *new_node2 = ft_lstnew("Node 2 data");
    ft_lstadd_front(&list, new_node1);
    ft_lstadd_front(&list, new_node2);
    t_list *current = list;
    while (current)
    {
        printf("Node data: %s\n", (char *)current->content);
        current = current->next;
    }
    ft_lstclear(&list, free);

    return 0;
}
*/
