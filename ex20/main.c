/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:30:21 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/01 15:31:46 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strdup.c"

int	main(void)
{
	char	*name;

	name = "guilherme";
	printf("%p\n", name);
	ft_strdup(name);
	printf("%p\n", name);
	printf(name);
}
