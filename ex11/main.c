/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:22:52 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/26 13:01:51 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_div_mod.c"

int main(void)
{
	int	a = 80;
	int	b = 3;
	int	div = 0;
	int	mod = 0;

	printf("%d, %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d\n", div, mod);
	return (0);
}