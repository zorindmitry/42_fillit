/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:46:37 by pbondoer          #+#    #+#             */
/*   Updated: 2016/01/08 01:10:46 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2)
	{
		s1[i] = *(s2++);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
