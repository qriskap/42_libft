/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:35:07 by ikarjala          #+#    #+#             */
/*   Updated: 2021/12/17 17:59:56 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isprint(int c)
{
	return (c >= 040 && c <= 0176);
}
