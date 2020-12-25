/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 22:49:33 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/25 22:28:28 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dtmp;
	const char	*stmp;

	dtmp = dest;
	stmp = src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (n--)
			*dtmp++ = *stmp++;
	}
	else
	{
		dtmp += n;
		stmp += n;
		while (n--)
			*--dtmp = *--stmp;
	}
	return (dest);
}


// int main(void)
// {
//     char arr[10] = "test";
//     char b[10] = "hipaeng";
//     ft_memmove(arr+2, b, ft_strlen("test"));
//     printf("%s", arr);
//     return (0);
// }