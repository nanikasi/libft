/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanakani <nanakani@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:32:08 by nanakani          #+#    #+#             */
/*   Updated: 2022/07/06 23:32:08 by nanakani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isalnum(unsigned char c);
int		ft_isascii(int i);
int		ft_isprint(unsigned char c);
int		ft_strlen(char *s);
void	*ft_memset(void *b, int c, unsigned int len);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dst, void *src, unsigned int n);
void	*ft_memmove(void *dst, void *src, unsigned int len);

#endif
