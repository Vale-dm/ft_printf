/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:39:09 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 10:34:06 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg <= '9' && arg >= '0')
		|| (arg <= 'Z' && arg >= 'A')
		|| (arg <= 'z' && arg >= 'a'))
		return (1);
	return (0);
}
/*
int main()
{
	int c;
	c = 'b';
	printf("%d", isalnum(c));
	printf("%d", ft_isalnum(c));
	return (0);
}
*/
