/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:02:39 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 16:12:18 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*arr;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	if(!(arr = (char *)malloc(sizeof(char) * (ls1 + ls2))))
		return (0);
	ft_memcpy(arr, s1, ls1);
	ft_memcpy(arr + ls1, s2, ls2);
	arr[ls1 + ls2] = '\0';
	return (arr);
}
