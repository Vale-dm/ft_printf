/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:09:53 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 10:57:35 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		else
		{
			p1++;
			p2++;
		}
	}
	return (0);
}
/*
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    int result = memcmp(str1, str2, 5);

    if (result < 0)
        printf("'%s' es menor que '%s'\n", str1, str2);
    else if (result > 0)
        printf("'%s' es mayor que '%s'\n", str1, str2);
    else
        printf("'%s' es igual a '%s'\n", str1, str2);

	return 0;
}
*/
