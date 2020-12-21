/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:03:13 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/21 15:29:34 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//part 1
void        *ft_memset(void *s, int c, size_t n);
void        ft_bzero(void *s, size_t n);
int         ft_isdigit(int c);
size_t      strlen(const char *s);
#endif
