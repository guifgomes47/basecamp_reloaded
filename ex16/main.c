/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:30:11 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/28 22:45:50 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int	main(void)
{
	char	*str;

	str = " ";
	printf("O :");
	printf("%ld\n", strlen(str));
	printf("P: ");
	printf("%d\n",ft_strlen(str));
	str = "\0";
	printf("O:");
	printf("%ld\n", strlen(str));
	printf("P:");
	printf("%d\n",ft_strlen(str));
	str = "\n";
	printf("O:");
	printf("%ld\n", strlen(str));
	printf("P:");
	printf("%d\n",ft_strlen(str));
	str = "guilherme";
	printf("O:");
	printf("%ld\n", strlen(str));
	printf("P:");
	printf("%d\n",ft_strlen(str));
	str = "what happens if i put i billion of charactes in one string, less th";
	printf("O:");
	printf("%ld\n", strlen(str));
	printf("P:");
	printf("%d\n",ft_strlen(str));
}
