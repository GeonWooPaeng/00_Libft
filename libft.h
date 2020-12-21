/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:03:13 by gpaeng            #+#    #+#             */
/*   Updated: 2020/12/21 19:11:10 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//part 1
void        *ft_memset(void *dest, int c, size_t n);
void        ft_bzero(void *s, size_t n);
void        *ft_memcpy(void *dest, const void *src, size_t n);
void        *ft_memccpy(void *dest, const void *src, int c, size_t n);
void        *ft_memmove(void *dest, const void *src, size_t n);
void        *ft_memchr(const void *s, int c, size_t n);
int         ft_memcmp(const void *s1, const void *s2, size_t n);
void        *ft_calloc(size_t nmemb, size_t size);

size_t      ft_strlen(const char *s);
size_t      ft_strlcpy(char *dest, const char *src, size_t size);
size_t      ft_strlcat(char *dest, const char *src, size_t size);
char        *ft_strchr(const char *s, int c);
char        *ft_strrchr(const char *s, int c);
int         ft_strncmp(const char *s1, const char *s2, size_t n);
char        *ft_strnstr(const char *big, const char *little, size_t len);
char        *ft_strdup(const char *s);
int         ft_atoi(const char *nptr);
         
int         ft_isalpha(int c);
int         ft_isdigit(int c);
int         ft_isalnum(int c);
int         ft_isascii(int c);
int         ft_isprint(int c);
int         ft_toupper(int c);
int         ft_tolower(int c);

#endif
