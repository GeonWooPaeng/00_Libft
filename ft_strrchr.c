/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 13:48:43 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 13:39:14 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		slen;
	char	*stmp;

	stmp = (char *)s;
	slen = ft_strlen(s);
	stmp += (slen - 1);
	while(*stmp)
	{
		if (*stmp == c)
			return (stmp);
		stmp--;
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