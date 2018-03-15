/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 20:21:32 by vchandra          #+#    #+#             */
/*   Updated: 2018/03/14 23:02:59 by vchandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strarrmax(char **arr)
{
	int		i;
	int		max;
	int		curr_len;

	i = -1;
	max = 0;
	while (arr[++i])
	{
		curr_len = ft_strlen(arr[i]);
		if (curr_len > max)
			max = curr_len;
	}
	return (max);
}
