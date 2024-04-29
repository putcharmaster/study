/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <sanhwang@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:55:24 by sanhwang          #+#    #+#             */
/*   Updated: 2024/04/28 17:14:55 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	m;
	i = 0;
	m = tab[i];
	while (i < len)
	{
		if (m < tab[i])
			m = tab[i];
		i++;
	}
	return (m);
}
