/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:44:42 by vduran-m          #+#    #+#             */
/*   Updated: 2024/03/30 17:25:53 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
/*gcc ft_strmapi.c ft_strdup.c
char myFunction(unsigned int index, char character)
{
    return (character >= 'a' && character <= 'z') ? character - 32 : character;
}

int main(void)
{
    char myString[] = "Hello, world!";
    char *result = ft_strmapi(myString, myFunction);
    printf("Result after applying ft_strmapi: %s\n", result);
    free(result);
    return 0;
}
*/
