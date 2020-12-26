/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 20:32:35 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/26 13:09:52 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dtmp;
	const char	*stmp;

	if (!dest && !src)
		return (0);
	dtmp = dest;
	stmp = src;
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
//         char a = 'c';
//         /* src 메모리를 sizeof(src) 만큼 (32byte) dest 로 복사합니다. */
//         printf("%p",ft_memccpy(dest, src, a, 5));
//         printf( "%s\n", dest);
        
//         return 0;
// }

