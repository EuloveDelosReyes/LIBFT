/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:10:42 by edelos-r          #+#    #+#             */
/*   Updated: 2019/05/06 20:49:07 by edelos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*str;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	cc = (char)c;
	str = (char*)s;
	while (i <= len)
	{
		if (str[i] == cc)
			return (&str[i]);
			i++;
	}
	return (NULL);
}
