/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisboa <slisboa@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:14:28 by slisboa           #+#    #+#             */
/*   Updated: 2026/02/03 16:10:18 by slisboa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	res;
	res = ft_recursive_power(5, 5);
	printf("%d", res);
	putchar('\n');
	return(0);
}*/
