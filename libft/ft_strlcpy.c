/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:00:14 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 17:23:09 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
int main(void)
{
    char mySource[] = "Hello, world!";
    char myDestination[20];
    size_t bufferSize = sizeof(myDestination);
    size_t result = ft_strlcpy(myDestination, mySource, bufferSize);
    printf("Result from ft_strlcpy: %zu\n", result);
    printf("Destination after ft_strlcpy: %s\n", myDestination);

    char standardDestination[20];
    size_t standardResult = strlcpy(standardDestination, mySource, bufferSize);
    printf("Result from strlcpy: %zu\n", standardResult);
    printf("Standard destination after strlcpy: %s\n", standardDestination);

    return 0;
}
*/
