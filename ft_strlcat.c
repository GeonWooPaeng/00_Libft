/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:40:40 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 10:45:24 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t ldest;
    size_t lsrc;
    size_t idx;

    ldest = ft_strlen(dest);
    lsrc = ft_strlen(src);
    if (ldest >= size)
        return (lsrc + size);
    if (size == 0)
        return (lsrc);
    idx = 0;
    while (src[idx] != '\0' && idx < (size - 1 - ldest))
    {
        dest[ldest + idx] = src[idx];
        idx++;
    }
    return (ldest + lsrc);
}