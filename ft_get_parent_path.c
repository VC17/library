/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parent_path.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchandra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 20:23:01 by vchandra          #+#    #+#             */
/*   Updated: 2018/03/14 23:40:39 by vchandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_get_parent_path(char *path)
{
	char	*last_slash;
	char	*parent;

	last_slash = strrchr(path, '/');
	parent = strndup(path, last_slash - path);
	return (parent);
}
