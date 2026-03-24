/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:32:05 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 11:15:37 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc (sizeof (*new));
	if (!(new))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main(void)
{
    char *sample_content = "Hello, World!";
    t_list *new_element = ft_lstnew(sample_content);

    if (new_element)
        printf("Content: %s\n", (char *)new_element->content);
    else
        printf("Failed to create a new element.\n");

   free(new_element);

    return 0;
}
*/
