/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:15:14 by edelos-r          #+#    #+#             */
/*   Updated: 2019/05/06 20:49:38 by edelos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			h1;
	int			h2;
	int			n1;
	int			n2;

	if (*needle == '\0')
		return ((char *)haystack);
	h1 = 0;
	n1 = 0;
	while (*(haystack + h1))
	{
		h2 = h1;
		n2 = n1;
		while (*(needle + n2) && *(haystack + h2) == *(needle + n2))
		{
			h2++;
			n2++;
		}
		if (*(needle + n2) == '\0')
			return ((char *)(haystack + h1));
		h1++;
	}
	return (NULL);
}
