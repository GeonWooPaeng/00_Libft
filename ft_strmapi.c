/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 22:19:07 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 20:30:25 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	int				slen;
	unsigned int	idx;

	slen = ft_strlen(s);
	idx = 0;
	if (!(arr = (char *)malloc(sizeof(char) * (slen + 1))))
		return (0);
	while (idx < slen)
	{
		arr[idx] = f(idx, s[idx]);
		idx++;
	}
	arr[idx] = '\0';
	return (arr);
}

// char oddcheck(unsigned int i, char c)
// {
//     char x;
//     x = 'x';
//     if(i % 2 == 1)
//         return(c);
//     else
//         return(x);
// }

// int main()
// {
// 	char str1[] = "abcdefghijklmnopqrstuvyxyz";
// 	char *str2;
// 	str2 = ft_strmapi(str1, *oddcheck);
// 	printf("str2 : %s\n",str2);	
// }