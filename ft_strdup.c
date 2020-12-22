/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:29:25 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/22 23:20:03 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	int		len;

	len = ft_strlen(s);
	if (!(arr = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	len = 0;
	while (s[len])
	{
		arr[len] = s[len];
		len++;
	}
	arr[len] = '\0';
	return (arr);
}

// int main(void)
// {
//     const char *b = " d d";
//     char *a; 
//     char *c; 
//     a = ft_strdup(b);
//     c = strdup(b);
//     printf("%s\n",a);
//     printf("%s\n",c); 
//     return (0);
// }