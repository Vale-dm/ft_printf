/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:00:06 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 16:59:30 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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

    int size = ft_lstsize(list);

    printf("Size of the list: %d\n", size);

	free(second);
    free(list);

    return 0;
}
*/
