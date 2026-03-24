/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:20:04 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/03 16:15:40 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static size_t	calculate_word_length(const char *s, char c)
{
	const char	*nextd;

	nextd = ft_strchr(s, c);
	if (!nextd)
		return (ft_strlen(s));
	else
		return (nextd - s);
}

static void	free_list_memory(char **lst, int i)
{
	while (i > 0)
		free(lst[--i]);
	free(lst);
}

static int	process_word(char const **s, char c, char ***lst, int *i)
{
	while (**s == c && **s)
		(*s)++;
	if (**s)
	{
		(*lst)[*i] = ft_substr(*s, 0, calculate_word_length(*s, c));
		if (!(*lst)[*i])
		{
			free_list_memory(*lst, *i);
			return (0);
		}
		*s += calculate_word_length(*s, c);
		(*i)++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	while (*s)
	{
		if (!process_word(&s, c, &lst, &i))
			return (NULL);
	}
	lst[i] = NULL;
	return (lst);
}
/*
int main(void)
{
    char **result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
    if (!result)
    {
        printf("Error: ft_split returned NULL.\n");
        return 1;
    }
    for (int i = 0; result[i]; i++)
    {
        printf("Split %d: %s\n", i + 1, result[i]);
        free(result[i]);
    }

    free(result);

    return 0;
}

*/
