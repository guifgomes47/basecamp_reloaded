/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:05:39 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/02 21:28:45 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_count_if.c"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}

int	ft_if(char *p)
{
	if (ft_strcmp(p, "uno") == 0)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char	**cars;

	cars = malloc(sizeof(char) * 100);
	cars[0] = "ferrari";
	cars[1] = "porshe";
	cars[2] = "masserati";
	cars[3] = "uno";
	cars[4] = "clio";
	cars[5] = "uno";
	cars[6] = "uno";
	cars[7] = "uno";
	cars[8] = "stilo";
	cars[9] = "fiorino";
	cars[10] = "renault";
	cars[11] = "onix";
	printf("%d", ft_count_if(cars, &ft_if));
	free(cars);
	return (0);
}
