/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:11:35 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 16:02:42 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return(0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
// 	t_list *a[3];
// 	a[0] = malloc(sizeof(t_list));
// 	a[1] = malloc(sizeof(t_list));
// 	a[2] = malloc(sizeof(t_list));
// 	char *b = "a";
// 	char *c = "b";
// 	char *d = "c";

// 	a[0]->content = b;
// 	a[0]->next = a[1];
// 	a[1]->content = c;
// 	a[1]->next = a[2];
// 	a[2]->content = d;
// 	a[2]->next = 0;
// 	t_list *e = ft_lstlast(a[0]);
// 	printf("%p\n", a[2]);
// 	printf("%p\n", e);
// 	free(a[0]);
// 	free(a[1]);
// 	free(a[2]);
// }