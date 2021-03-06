/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:40:40 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/25 22:45:23 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
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
	if (ldest < size - 1)
	{
		while (src[idx] != '\0' && idx < (size - 1 - ldest))
		{
			dest[ldest + idx] = src[idx];
			idx++;
		}
	}
	dest[ldest + idx] = '\0';
	return (ldest + lsrc);
}

// int				main(void)
// {
// 	char	*str_base;
// 	char	dest[100];
// 	char	dest2[100];
// 	char	*src;
// 	int		index;

// 	str_base = "Hello";
// 	src = " World";
// 	index = 0;
// 	while (index < 6)
// 	{
// 		dest[index] = str_base[index];
// 		dest2[index] = str_base[index];
// 		index++;
// 	}
// 	printf("c  : (%lu) $%s$\n", strlcat(dest, src, 0), dest);
// 	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 0), dest2);
// }
