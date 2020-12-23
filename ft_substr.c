/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:34:23 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 17:24:36 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	idx;
	char	*sptr;
	char	*arr;

	sptr = (char *)s;
	sptr += start;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (!(arr = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	idx = 0;
	while (*sptr && idx < len)
	{
		arr[idx] = *sptr++;
		idx++;
	}
	arr[idx] = '\0';
	return (arr);
}

// int main(void)
// {
// 	char *c;
// 	char *a = "gpaeng handsome";
// 	c = ft_substr(a, 2, 6);
// 	printf("%s\n", c);
// }