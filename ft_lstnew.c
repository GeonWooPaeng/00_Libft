/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 12:48:08 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/25 22:03:49 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*sarr;

	if (!(sarr = malloc(sizeof(t_list))))
		return (0);
	sarr->content = content;
	sarr->next = 0;
	return (sarr);
}
