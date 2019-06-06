/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:45:25 by edelos-r          #+#    #+#             */
/*   Updated: 2019/05/16 12:54:10 by edelos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **list, void (*del)(void *, size_t))
{
	if ((*list)->next)
		ft_lstdel(&(*list)->next, del);
	ft_lstdelone(&(*list), del);
}
