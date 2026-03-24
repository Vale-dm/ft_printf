/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:57:41 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 16:38:34 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
int main(void)
{
    t_list *list = NULL;
    list = (t_list *)malloc(sizeof(t_list));
    list->content = "First element";
    list->next = NULL;
    t_list *second = (t_list *)malloc(sizeof(t_list));
    second->content = "Second element";
    second->next = NULL;
    list->next = second;
    t_list *last = ft_lstlast(list);
    if (last)
        printf("Last element: %s\n", (char *)last->content);
    else
        printf("List is empty.\n");
    free(second);
    free(list);
    return 0;
}
*/
