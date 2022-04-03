/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:10:16 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/28 13:23:17 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "ft_putstr.c"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	*str;

	str = "guilherme ferreira gomes";
	ft_putstr(str);
	str = "\n";
	ft_putstr(str);
	str = "this is a pointer assignment with string";
	ft_putstr(str);
	return (0);
}
