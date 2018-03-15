/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 20:10:37 by vchandra          #+#    #+#             */
/*   Updated: 2018/03/14 23:40:03 by vchandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace(char *str, char *term, char *replace_by)
{
	int		i;
	char	*new_path;
	int		done;

	if (!ft_strstr(str, term))
		return (NULL);
	new_path = ft_strnew(1);
	i = -1;
	done = 0;
	while (str[++i])
	{
		if (ft_strstartswith(str + i, term) && !done)
		{
			new_path = ft_strjoincl(new_path, replace_by, 0);
			i += ft_strlen(term);
			if (!str[i])
				break ;
			new_path = ft_strjoinchcl(new_path, str[i]);
			done = 1;
		}
		else
			new_path = ft_strjoinchcl(new_path, str[i]);
	}
	return (new_path);
}
