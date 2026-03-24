/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:18:54 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 11:13:45 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		++start;
	while (start < end && ft_isset(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
/*
int main(void) {
    const char *originalString = "   Hello, World!   ";
    const char *trimSet = " ,!";
    char *trimmedString = ft_strtrim(originalString, trimSet);

    if (trimmedString) {
        printf("Original string: \"%s\"\n", originalString);
        printf("Trimmed string: \"%s\"\n", trimmedString);

        free(trimmedString);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
