/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:08:44 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/11/08 18:00:29 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	jeff;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		jeff = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = jeff;
		i++;
	}
}

// int main(void)
// {
// 	int tab[]= {0, 1, 2, 3, 4, 5, 6, 7};
//     int size = 8;
// 	int i = 0;
// 	ft_rev_int_tab(tab, size);
// 	while(i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
//     return 0;
// }