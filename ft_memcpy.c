/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:32:54 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 20:27:37 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dtmp;
	unsigned char	*stmp;

    if (!dest && !src)
		return (0);
	dtmp = dest;
	stmp = (unsigned char *)src;
	while (n--)
	{
		*dtmp++ = *stmp++;
    }
	return (dest);
}

// int main(void)
// {
//         char src[32] = "Source memory";
//         char dest[32] = "asdd";
 
//         printf("%s\n", dest);
//         /* src 메모리를 sizeof(src) 만큼 (32byte) dest 로 복사합니다. */
//         ft_memcpy( dest, src, 4);
//         printf( "%s\n", dest);
        
//         return 0;
// }