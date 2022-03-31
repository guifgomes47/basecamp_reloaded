/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:03:43 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/31 15:22:41 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}

void	ft_swap(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	temp = "";
	i = 0;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	ft_swap(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
