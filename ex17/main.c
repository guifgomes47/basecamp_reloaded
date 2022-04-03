/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:49:42 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/28 23:45:06 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strcmp.c"

int	main(void)
{
	printf("O:%d\n", strcmp("k", "k"));
	printf("P:%d\n", ft_strcmp("k", "k"));
	printf("O:%d\n", strcmp("a", "z"));
	printf("P:%d\n", ft_strcmp("a", "z"));
	printf("O:%d\n", strcmp("b", "a"));
	printf("P:%d\n", ft_strcmp("b", "a"));
}
