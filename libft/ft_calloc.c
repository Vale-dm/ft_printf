/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:40:16 by vduran-m          #+#    #+#             */
/*   Updated: 2024/04/01 10:33:01 by vduran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*
int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    int *arr = (int *)calloc(num_elements, element_size);

    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    for (size_t i = 0; i < num_elements; i++) {
        arr[i] = 0;
    }
    printf("Arreglo inicializado:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
*/
