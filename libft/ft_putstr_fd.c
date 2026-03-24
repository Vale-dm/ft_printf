/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:21:34 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 17:13:35 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] && fd >= 0)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*gcc ft_putstr_fd.c ft_putchar_fd.c
int main(void)
{
    char myString[] = "Hello, world!";
    int fileDescriptor = 1;
    ft_putstr_fd(myString, fileDescriptor);

    return 0;
}
*/
