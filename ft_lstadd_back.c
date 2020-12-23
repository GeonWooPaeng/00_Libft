/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 15:09:28 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/23 16:04:53 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
		*lst = new;
	else
		(ft_lstlast(*lst))->next = new;
}

// int main()
// {
// 	t_list *a[3];
// 	a[0] = malloc(sizeof(t_list));
// 	a[1] = malloc(sizeof(t_list));
// 	a[2] = malloc(sizeof(t_list));
// 	t_list *new = malloc(sizeof(t_list));
// 	char *b = "a";
// 	char *c = "b";
// 	char *d = "c";
// 	char *k = "k";
// 	a[0]->content = b;
// 	a[0]->next = a[1];
// 	a[1]->content = c;
// 	a[1]->next = a[2];
// 	a[2]->content = d;
// 	a[2]->next = 0;
// 	new->content = k;
// 	new->next = 0;
// 	ft_lstadd_back(a, new);
// 	t_list *e = ft_lstlast(a[0]);
// 	printf("%p\n", new);
// 	printf("%p\n", e);
// 	free(a[0]);
// 	free(a[1]);
// 	free(a[2]);
// 	free(new);
// }