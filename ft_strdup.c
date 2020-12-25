/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:29:25 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/25 22:40:54 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *arr;

	if (!(arr = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	ft_memcpy(arr, s, ft_strlen(s) + 1);
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
// static void     ft_print_result(char const *s)
// {
//     int     len;

// 	len = 0;
//     while (s[len])
// 		len++;
//     write(1, s, len);
// }

// int main(int argc, const char *argv[])
// {
//     char    str[] = "lorem ipsum dolor sit amet";
//     char    *str_dup;

// 	alarm(5);
//     if (argc == 1)
// 		return (0);
// 	printf("%d", atoi(argv[1]));
//     if (atoi(argv[1]) == 0)
//     {
// 		if (!(str_dup = ft_strdup(str)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str_dup);
// 		if (str_dup == str)
// 			ft_print_result("\nstr_dup's adress == str's adress");
// 		else
// 			free(str_dup);
// 	}
// 	return (0);
// }