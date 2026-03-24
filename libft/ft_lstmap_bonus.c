/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:49:11 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/03 18:19:43 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*new_content;

	first = NULL;
	new = NULL;
	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		new_content = (*f)(lst->content);
		new = ft_lstnew(new_content);
		if (!new)
		{
			del(new_content);
			ft_lstclear(&first, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/*gcc ft_lstmap.c ft_lstclear.c ft_lstnew.c ft_lstdelone.c
 ft_lstadd_back.c ft_lstlast.c
*/
/*
void *double_int(void *content)
{
    int *value = (int *)content;
    int *new_value = malloc(sizeof(int));
    if (!new_value)
        return NULL;
    *new_value = (*value) * 2;
    return new_value;
}

void free_int(void *content)
{
    free(content);
}

int main(void)
{
    // Create a linked list with some integers
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 5;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->content) = 10;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->next->content) = 15;

    // Apply ft_lstmap to double each integer
    t_list *doubled_list = ft_lstmap(lst, double_int, free_int);

    // Print the doubled values
    t_list *current = doubled_list;
    while (current)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }

    // Clean up
    ft_lstclear(&lst, free_int);
    ft_lstclear(&doubled_list, free_int);

    return 0;
}
*/
