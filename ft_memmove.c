/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:09:36 by ikarjala          #+#    #+#             */
/*   Updated: 2022/01/23 05:40:29 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	t_bool	dir_fwd;
	t_bool	dir_sign;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0 || dst == src)
		return (dst);
	dir_fwd = src > dst;
	dir_sign = (t_bool)(1 | -!dir_fwd);
	p_dst = (unsigned char *)dst + ((size_t)dir_fwd * len);
	p_src = (unsigned char *)src + ((size_t)dir_fwd * len);
	while (len-- > 0)
	{
		*p_dst = *p_src;
		p_dst += dir_sign;
		src += dir_sign;
	}
	return (dst);
}

/*
** if src pos == dst pos, do nothing
** overlap protection:
**  if src pos > dst pos, cp forward
**  if src pos < dst pos, cp reverse
*/
