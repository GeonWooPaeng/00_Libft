/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:35:39 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 13:26:27 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *tmp;

	tmp = s;
	while (n--)
	{
		if (*tmp == c)
			return ((void *)tmp);
		tmp++;
	}
	return (0);
}

// int main(void)
// {
//         char src[32] = "Source memory";
//         // char dest[32] = "";
//         char a = 'm';
//         /* src 메모리를 sizeof(src) 만큼 (32byte) dest 로 복사합니다. */
//         printf("%p",ft_memchr(src, a, 5));
        
//         return 0;
// }