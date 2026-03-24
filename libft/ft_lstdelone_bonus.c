/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:13:00 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 15:29:38 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*
void my_del(void *content)
{
}

int main(void)
{
    t_list *myNode = (t_list *)malloc(sizeof(t_list));
    if (!myNode)
    {
        perror("Error allocating memory for list node");
        return 1;
    }
    myNode->next = NULL;
    ft_lstdelone(myNode, my_del);
    return 0;
}
*/
