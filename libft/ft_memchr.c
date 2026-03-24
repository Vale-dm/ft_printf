/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:08:33 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 10:52:17 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n--)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	}
	return (0);
}
/*
int main()
{
	char myString[] = "Hello, World!";
	char targetChar = 'W';

	void *result = memchr(myString, targetChar, strlen(myString));
	size_t index = (size_t)(result - (void *)myString);
	printf("'%c' found at index %zu\n", targetChar, index);
	return 0;
}
*/
