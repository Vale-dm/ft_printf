/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:43:54 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 10:33:38 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*i;

	i = s;
	while (n != 0)
	{
		*i = 0;
		i++;
		n--;
	}
}
/*
int	main()
{
	char	myString[10];

	myString[0] = 'H';
	myString[1] = 'e';
	myString[2] = 'l';
	myString[3] = 'l';
	myString[4] = 'o';
	myString[5] = '!';

	printf("Antes de ft_bzero: %s\n", myString);

	ft_bzero(myString, sizeof(myString));

	printf("Después de ft_bzero: %s\n", myString);

	return 0;
}
*/
