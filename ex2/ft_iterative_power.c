/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:45:53 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/03 16:10:44 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	int	res;

	res = ft_iterative_power(5, 5);
	printf("%d", res);
       	putchar('\n');
	return(0);
}*/
