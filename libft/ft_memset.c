/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:25:51 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 11:06:39 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n != 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}
/*
int main()
{
    int myArray[5];

    memset(myArray, 1, sizeof(myArray));

    for (size_t i = 0; i < sizeof(myArray) / sizeof(int); ++i)
	{
        printf("%d ", myArray[i]);
    }
	return 0;
}
*/
