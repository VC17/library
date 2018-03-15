/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 20:06:41 by vchandra          #+#    #+#             */
/*   Updated: 2018/03/14 20:06:50 by vchandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathjoin(char *p1, char *p2)
{
	if (!ft_strendswith(p1, "/"))
		return (ft_strjoin(ft_strjoinch(p1, '/'), p2));
	return (ft_strjoin(p1, p2));
}
