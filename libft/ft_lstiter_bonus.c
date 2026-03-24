/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:28:37 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 18:56:59 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*gcc ft_lstiter.c ft_lstadd_back.c ft_lstlast.c
ft_lstnew.c ft_lstclear.c ft_lstdelone.c
void my_function(void *content)
{
    printf("Content: %s\n", (char *)content);
}
int main(void)
{
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew("Hello"));
    ft_lstadd_back(&list, ft_lstnew("World"));
    ft_lstadd_back(&list, ft_lstnew("from"));
    ft_lstadd_back(&list, ft_lstnew("Linked"));
    ft_lstadd_back(&list, ft_lstnew("List"));
    ft_lstiter(list, my_function);
    ft_lstclear(&list, free);

    return 0;
}
*/
