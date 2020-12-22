/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 20:32:35 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 16:01:47 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *dtmp;
	unsigned char *stmp;

	if (!dest && !src)
		return (0);
	dtmp = dest;
	stmp = (unsigned char *)src;
	while (n--)
	{
		*dtmp++ = *stmp;
		if (*stmp == (unsigned char)c)
			return (dtmp);
		stmp++;
	}
	return (0);
}

// int main(void)
// {
//         char src[32] = "Source memory";
//         char dest[32] = "";
//         char a = 'k';
//         /* src 메모리를 sizeof(src) 만큼 (32byte) dest 로 복사합니다. */
//         ft_memccpy( dest, src, a, 5);
//         printf( "%s\n", dest);
        
//         return 0;
// }

