/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:09:59 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 23:20:56 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

// int main(void)
// {
//     char dest[] = "gpaeng fighting";
//     char *f;
//     char *l;

//     f = ft_strchr(dest, 'i');
//     l = ft_strrchr(dest, 'i');
//     printf("f >> %s, l >> %s\n", f, l);
//     return (0);
// }