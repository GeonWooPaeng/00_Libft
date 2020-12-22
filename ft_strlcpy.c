/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:27:31 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 10:40:22 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t cnt;
    size_t idx;

    cnt = ft_strlen(src);
    idx = 0;
    if (size != 0)
    {
        while (src[idx] != '\0' && idx < (size - 1))
        {
            dest[idx] = src[idx];
            idx++;
        }
        dest[idx] = '\0';
    }
    return (cnt);
}