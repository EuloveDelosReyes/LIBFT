/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:18:47 by edelos-r          #+#    #+#             */
/*   Updated: 2019/05/08 17:56:22 by edelos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *htk, const char *ndl, size_t len)
{
	size_t		h1;
	size_t		h2;
	size_t		n1;
	size_t		n2;

	if (*ndl == '\0')
		return ((char*)htk);
	h1 = 0;
	n1 = 0;
	while (*(htk + h1) && h1 < len)
	{
		h2 = h1;
		n2 = n1;
		while (*(ndl + n2) && *(htk + h2)
				== *(ndl + n2) && h1 + n2 < len)
		{
			h2++;
			n2++;
		}
		if (*(ndl + n2) == '\0')
			return ((char *)(htk + h1));
		h1++;
	}
	return (NULL);
}
