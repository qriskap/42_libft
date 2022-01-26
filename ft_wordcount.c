/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 22:21:36 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 22:22:16 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *s, const char *del)
{
	size_t	wc;
	t_bool	in_word_now;
	t_bool	in_word_bef;

	if (!s)
		return (0);
	wc = 0;
	in_word_now = FT_FALSE;
	in_word_bef = FT_FALSE;
	while (*s != '\0')
	{
		in_word_now = !ft_strchr_equ(del, *s);
		wc += !in_word_bef && in_word_now;
		in_word_bef = in_word_now;
		s++;
	}
	return (wc);
}
