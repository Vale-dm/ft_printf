/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:21:59 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 17:11:33 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*gcc ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c
int main(void)
{
    char myString[] = "Hello, world!";
    int fileDescriptor = 1;
    ft_putendl_fd(myString, fileDescriptor);

    return 0;
}
*/
