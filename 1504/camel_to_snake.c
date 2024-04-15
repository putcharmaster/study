/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <sanhwang@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:24:09 by sanhwang          #+#    #+#             */
/*   Updated: 2024/04/15 19:38:09 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if(i == 0)
					write(1, &av[1][i], 1);
				else
				{
					av[1][i] = av[1][i] + 32;
					write(1, "_", 1);
					write(1, &av[1][i], 1);
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;

		}
	}
	write(1, "\n", 1);
	return (0);
}
