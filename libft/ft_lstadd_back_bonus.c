/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:04:02 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 15:14:00 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*//gcc ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstclear.c ft_lstdelone.c
int main(void)
{
    t_list *list = NULL;
    t_list *new_node1 = ft_lstnew("Node 1 data");
    t_list *new_node2 = ft_lstnew("Node 2 data");
    ft_lstadd_back(&list, new_node1);
    ft_lstadd_back(&list, new_node2);
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
