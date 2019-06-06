/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:54:07 by edelos-r          #+#    #+#             */
/*   Updated: 2019/05/08 17:01:54 by edelos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*p;

	p = ft_memchr(src, c, n);
	if (p == NULL)
	{
		ft_memcpy(dst, src, n);
		return (NULL);
	}
	ft_memcpy(dst, src, p - src + 1);
	return (dst + (p - src + 1));
}
