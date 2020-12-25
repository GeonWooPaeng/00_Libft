/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 22:58:15 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/24 23:14:33 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *arr;

	if (!(arr = (void *)malloc(nmemb * size)))
		return (0);
	ft_memset(arr, 0, nmemb * size);
	return (arr);
}
