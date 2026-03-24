/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:34:05 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/03 13:54:56 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	else
	{
		while (src[j] != '\0')
		{
			ptr[j] = src[j];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
}
/*
int main()
{
	int i;
	i = 0;
	char *str = "hola";
	char *dest = ft_strdup(str);
	while (dest[i] != '\0')
	{
		write (1, &dest[i], 1);
		i++;
	}
	return 0;
}
*/
