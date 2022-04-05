/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:27:31 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/05 12:27:13 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strcpy(char *cpy, char *src)
{
	while (*src)
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';
	return (cpy);
}

char	*ft_strdup(char *src)
{
	char	*cpy;

	cpy = (char *) malloc(ft_strlen(src) * sizeof(char));
	ft_strcpy(cpy, src);
	return (cpy);
}
