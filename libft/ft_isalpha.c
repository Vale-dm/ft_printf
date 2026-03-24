/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:56:26 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 10:37:15 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg <= 'Z' && arg >= 'A') || (arg <= 'z' && arg >= 'a'))
		return (1);
	return (0);
}
/*
int main()
{
	int c;
	c = 0;
	printf("%d", isalpha(c));
	printf("%d", ft_isalpha(c));
	return (0);
}
*/
