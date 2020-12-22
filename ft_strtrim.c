/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 19:27:58 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 20:31:33 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	size_t	slen;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	slen = ft_strlen(s1);
	if (!(arr = (char *)malloc(sizeof(char) * (slen + 1))))
		return (0);
	while (slen && s1[slen - 1] && ft_strchr(set, s1[slen - 1]))
		slen--;
	ft_memcpy(arr, s1, slen);
	arr[slen] = '\0';
	return (arr);
}

// int main()
// {
// 	char *a = "eedeegpaengeeed";
// 	char *b = "ed";
// 	printf("%s", ft_strtrim(a,b));
// }